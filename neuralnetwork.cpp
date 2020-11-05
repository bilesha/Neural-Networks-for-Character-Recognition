#include "neuralnetwork.h"
#include "activationfunctionsigmoid.h"
#include "activationtanh.h"
#include "activationfunctionrelu.h"
#define sqr(x)	((x) * (x))

#define getSRand()	((float)rand() / (float)RAND_MAX)
#define getRand(x)      (int)((float)(x)*rand()/(RAND_MAX+1.0))

neuralnetwork::neuralnetwork()
{
    LEARNING_RATE = 0.2;
    //HiddenLayer = new NeuronLayer(HIDDEN_LAYERNEURONS1, INPUT_NEURONS);
    InputLayer = new inputlayer(INPUT_NEURONS);
    for (int i = 0; i < NUMBER_OF_HIDDEN_LAYERS; i++)
    {
        if (i == 0) {
            HiddenLayers[i] = new NeuronLayer(HiddenLayer_NumberofNeurons[i], INPUT_NEURONS);

        }
        else
        {
            HiddenLayers[i] = new NeuronLayer(HiddenLayer_NumberofNeurons[i], HiddenLayers[i-1]->number_of_neurons);
        }
    }
    OutputLayer = new NeuronLayer(OUTPUT_NEURONS, HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->number_of_neurons);
    target = new double[OutputLayer->number_of_neurons];
    activation = new activationfunctionsigmoid();
    //activation = new activationtanh();
    //activation = new activationfunctionrelu();
    initialise();
}

neuralnetwork::~neuralnetwork()
{
    for (int i = 0; i< NUMBER_OF_HIDDEN_LAYERS; i++)
    {
        delete HiddenLayers[i];
    }
    //delete HiddenLayer;
    delete InputLayer;
    delete OutputLayer;
    delete[] target;
    delete activation;
}

void neuralnetwork::initialise()
{
      SSE = 0;
      sample=0;
      iterations=0;

      srand(static_cast<unsigned int>(123) );

      assignRandomWeights();

}

void neuralnetwork::save_weights(NeuronLayer* neuronlayer, int number_of_inputs, QTextStream* filestream)
{
    char tempBuffer3[80];
    QByteArray temp3;

    //----------------------------------------------
    // weights
    //
    qDebug() << "updating weights...";
    //qDebug() << "OUTPUT_NEURONS = " << OUTPUT_NEURONS;
   //qDebug() << "HIDDEN_NEURONS = " << HiddenLayer;
   // qDebug() << "INPUT_NEURONS = " << INPUT_NEURONS;

    // Update the weights for the output layer (step 4 for output cell)
    for (int neuron = 0 ; neuron < neuronlayer->number_of_neurons ; neuron++)
    {
      temp3.clear();
      for (int input = 0 ; input < number_of_inputs ; input++)
      {
          //---save------------------------------------
            ::sprintf(tempBuffer3,"%f,",neuronlayer->weights[neuron][input]);
            qDebug() << tempBuffer3;
            temp3.append(tempBuffer3);
          //---------------------------------------
      }

      // Update the Bias
      //---save------------------------------------
        ::sprintf(tempBuffer3,"%f",neuronlayer->biasweight[neuron]);
        temp3.append(tempBuffer3);
        temp3.append("\n");
        qDebug() << tempBuffer3 << endl;
        *filestream << temp3;
       }
}

void neuralnetwork::saveWeights(QString fileName)
{
    QFile file3(fileName);
    file3.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out3(&file3);


    // Update the weights for the output layer (step 4 for output cell)
    save_weights(OutputLayer, HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->number_of_neurons, &out3);
    for(int i = 0 ; i < NUMBER_OF_HIDDEN_LAYERS; i++){
        if (i == 0)
        {
            save_weights(HiddenLayers[i], InputLayer->number_of_inputs, &out3);
        }
        else
        {
            save_weights(HiddenLayers[i], HiddenLayers[i=1]->number_of_inputs, &out3);

        }
    }
    //save_weights(HiddenLayer, InputLayer->number_of_inputs, &out3);
    file3.close();
    qDebug() << "Weights saved to file.";
 }

void neuralnetwork::load_Weights(NeuronLayer* neuronlayer, int number_of_inputs, QTextStream* filestream)
{
    char tempBuffer3[80];
    QByteArray temp3;

    char tChar;

    QString strLine;
    qDebug() << "updating weights...";

    for (int neuron = 0 ; neuron < neuronlayer->number_of_neurons ; neuron++)
    {
      strLine = filestream->readLine();
      QTextStream streamLine(&strLine);

      streamLine.setRealNumberPrecision(12);
      qDebug() << "strLine = " << strLine << endl;
      for (int input = 0 ; input < number_of_inputs ; input++)
      {
          //---load------------------------------------

          streamLine >> neuronlayer->weights[neuron][input] >> tChar;
          qDebug() << neuronlayer->weights[neuron][input] ;

          //---------------------------------------
      }
      streamLine >> neuronlayer->biasweight[neuron];
      qDebug() << neuronlayer->biasweight[neuron];
    }
}


void neuralnetwork::loadWeights(QString fileName){

    QFile file3(fileName);
    file3.open(QIODevice::ReadOnly | QIODevice::Text);

    if(!file3.exists()){
        qDebug() << "Backpropagation::loadWeights-file does not exist!";
        return;
    }

    QTextStream in(&file3);

    load_Weights(OutputLayer,  HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->number_of_neurons, &in);
        for(int i = 0 ; i < NUMBER_OF_HIDDEN_LAYERS; i++)
        {
            if (i == 0)
            {
                save_weights(HiddenLayers[i], InputLayer->number_of_inputs, &in);
            }
            else
            {
                save_weights(HiddenLayers[i], HiddenLayers[i=1]->number_of_inputs, &in);

            }
        }
    //load_Weights(HiddenLayer, InputLayer->number_of_inputs, &in);

    file3.close();
    qDebug() << "Weights loaded.";
}

double neuralnetwork::trainNetwork()
{
    double err;
    if(!patternsLoadedFromFile) {
        qDebug() << "unable to train network, no training patterns loaded.";
        return -999.99;
    }
    shuffledata();
;    double accumulatedErr=0.0;

    err = 0.0;

    sample=0;
    while (1) {
        //retrieve input patterns
        for(int j=0; j < InputLayer->number_of_inputs; j++){
           InputLayer->activiation[j] = letters[sample].f[j];
        }

        for(int i=0; i < OutputLayer->number_of_neurons; i++){
            target[i] = letters[sample].outputs[i];
        }

        feedForward();

        /* need to iterate through all ... */
        err = 0.0;
        for (int k = 0 ; k < OutputLayer->number_of_neurons ; k++) {

          err += sqr( (letters[sample].outputs[k] - OutputLayer->activiation[k]) );
        }

        err = 0.5 * err;

        accumulatedErr = accumulatedErr + err;


        backPropagate();

        if (++sample == NUMBER_OF_TRAINING_PATTERNS) {
            //qDebug() << "training used " << sample << " example patterns."  << endl;
            break;
        }

      }
      //qDebug() << "1 epoch training complete.";
      return accumulatedErr;
}

int neuralnetwork::BestOutput( double *vector )
{
  int index, sel;
  double max;

  sel = 0;
  max = vector[sel];

  for (index = 1 ; index < OUTPUT_NEURONS ; index++) {
    if (vector[index] > max) {
      max = vector[index]; sel = index;
    }
  }

  return( sel );
}

void neuralnetwork::assignrandomweights(NeuronLayer* neurallayer )
{
    for(int neurons = 0; neurons < neurallayer->number_of_neurons; neurons++)
    {
        for (int input = 0; input<neurallayer->number_of_inputs; input++)
        {
           neurallayer->weights[neurons][input] = RAND_WEIGHT();
        }
    }
}
void neuralnetwork::assignRandomWeights( void )
{
    for (int i = 0; i < NUMBER_OF_HIDDEN_LAYERS; i++)
    {
        assignrandomweights(HiddenLayers[i]);

    }
    assignrandomweights(OutputLayer);
    for (int i = 0; i < NUMBER_OF_HIDDEN_LAYERS; i++)
    {
        assignRandomBias(HiddenLayers[i]);
    }
    assignRandomBias(OutputLayer);

}

void neuralnetwork::assignRandomBias(NeuronLayer* neurallayer)
{
    for(int neurons = 0; neurons < neurallayer->number_of_neurons; neurons++)
    {
        neurallayer->biasweight[neurons] = RAND_WEIGHT();
    }
}

double neuralnetwork::RAND_WEIGHT()
{

    return ( (static_cast<double>(rand()) / static_cast<double>(RAND_MAX) - 0.5) );
}

/*double neuralnetwork::sigmoid( double val )
{
  return (1.0 / (1.0 + exp(-val)));
}



 *  sigmoidDerivative()
 *
 *  Calculate and return the derivative of the sigmoid for the val argument.
 *


double neuralnetwork::sigmoidDerivative( double val )
{
  return ( val * (1.0 - val) );
}
*/
void neuralnetwork::feedforward(NeuronLayer* neuronlayer, double inputs[])
{
    int inp, hid, out;
    double sum;

    /* Calculate input to hidden layer */
    for (int neuron = 0 ; neuron < neuronlayer->number_of_neurons; neuron++) {

      sum = 0.0;
      for (int input = 0 ; input < neuronlayer->number_of_inputs ; input++) {
        sum += inputs[input] * neuronlayer->weights[neuron][input];
      }

      /* Add in Bias */
      sum += neuronlayer->biasweight[neuron];

      neuronlayer->activiation[neuron] = activation->activationvalue(sum );

    }
}
void neuralnetwork::feedForward( )
{
    for (int i = 0; i < NUMBER_OF_HIDDEN_LAYERS; i++)
    {
       if (i == 0)
       {
            feedforward(HiddenLayers[i], InputLayer->activiation);

       }
       else
       {
           feedforward(HiddenLayers[i], HiddenLayers[i - 1]->activiation);

       }
    }
    double expsum = 0.0;
    for(int out = 0; out <OutputLayer->number_of_neurons; out++)
    {
        double sum = 0.0;

        for(int hid = 0; hid < HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->number_of_neurons; hid++)
        {
              sum += HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->activiation[hid] * OutputLayer->weights[out][hid];
        }
        sum += OutputLayer->biasweight[out];
        OutputLayer->activiation[out] = sum;
        expsum += exp(sum);

     }
    for(int out = 0; out < OutputLayer->number_of_neurons; out++)
    {
        OutputLayer->activiation[out] = exp(OutputLayer->activiation[out])/expsum;
    }
    //feedforward(OutputLayer, HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->activiation);
}
void neuralnetwork::backpropagate(NeuronLayer* neuronlayer, NeuronLayer* backlayer)
{
    /* Calculate the hidden layer error (step 3 for hidden cell) */
    for (int neuron = 0 ; neuron < neuronlayer->number_of_neurons ; neuron++)
    {

      neuronlayer->errors[neuron] = 0.0;
      for (int backneuron = 0 ; backneuron < backlayer->number_of_neurons ; backneuron++) {
        neuronlayer->errors[neuron] += backlayer->errors[backneuron] * backlayer->weights[backneuron][neuron];
      }

      neuronlayer->errors[neuron] *= activation->activationderiative(neuronlayer->activiation[neuron] );
    }

}

double* neuralnetwork::testNetwork(LetterStructure testPattern){
    //retrieve input patterns
    for(int j=0; j < InputLayer->number_of_inputs; j++){
       InputLayer->activiation[j] = testPattern.f[j];
    }

    for(int i=0; i < OutputLayer->number_of_neurons; i++){
        target[i] = testPattern.outputs[i];
    }

    feedForward();

    return OutputLayer->activiation;
}
void neuralnetwork::updateweights(NeuronLayer* neuronlayer, double* input_activiation)
{
    /* Update the weights for the output layer (step 4 for output cell) */
    for (int neuron = 0 ; neuron < neuronlayer->number_of_neurons ; neuron++)
    {

        for (int frontneuron = 0 ; frontneuron < neuronlayer->number_of_inputs ; frontneuron++)
        {
            neuronlayer->weights[neuron][frontneuron] -= (LEARNING_RATE * neuronlayer->errors[neuron] * input_activiation[frontneuron]);
        }

      /* Update the Bias */
      neuronlayer->biasweight[neuron] -= (LEARNING_RATE * neuronlayer->errors[neuron]);

  }
}

void neuralnetwork:: shuffledata()
{
    for(i = 0; i<NUMBER_OF_TRAINING_PATTERNS; i++)
    {
        int randomshuffle = rand() % (NUMBER_OF_TRAINING_PATTERNS);
        LetterStructure L = letters[i];
        letters[i] = letters[randomshuffle];
        letters[randomshuffle] = L;
    }
}
void neuralnetwork::backPropagate( void )
{
   int inp, hid, out;

  /* Calculate the output layer error (step 3 for output cell) */
  for (out = 0 ; out < OutputLayer->number_of_neurons ; out++)
  {
    OutputLayer->errors[out] = (OutputLayer->activiation[out] - target[out]);
  }
    for (int i = NUMBER_OF_HIDDEN_LAYERS - 1; i >= 0 ; i--)
    {
        if (i == NUMBER_OF_HIDDEN_LAYERS-1)
        {
            backpropagate(HiddenLayers[i], OutputLayer);

        }
        else
        {
        backpropagate(HiddenLayers[i], HiddenLayers[i+1]);
        }
    }
    for (int out = 0; out < OutputLayer->number_of_neurons; out++)
    {
        for (int hid = 0 ; hid < HiddenLayers[NUMBER_OF_HIDDEN_LAYERS -1 ]->number_of_neurons ; hid++)
        {
            OutputLayer->weights[out][hid] -= (LEARNING_RATE * OutputLayer->errors[out] * HiddenLayers[NUMBER_OF_HIDDEN_LAYERS - 1]->activiation[hid]);
        }

        /* Update the Bias */
        OutputLayer->biasweight[out] -= (LEARNING_RATE * OutputLayer->errors[out]);
    }
    for (int i = NUMBER_OF_HIDDEN_LAYERS - 1; i >= 0 ; i--)
    {
        if (i == 0)
        {
            updateweights(HiddenLayers[i], InputLayer->activiation);
        }
        else
        {
            updateweights(HiddenLayers[i], HiddenLayers[i-1]->activiation);

        }
    }
}
