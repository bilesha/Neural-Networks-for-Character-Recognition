#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H
#include "neuronlayer.h"
#include "outputlayer.h"
#include "inputlayer.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "activationfunction.h"

#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDataStream>

class neuralnetwork
{
public:
    neuralnetwork();
    void initialise();
    ~neuralnetwork();
    //NeuronLayer *HiddenLayer;
    NeuronLayer *HiddenLayers[NUMBER_OF_HIDDEN_LAYERS];
    inputlayer *InputLayer;
    NeuronLayer *OutputLayer;
    double LEARNING_RATE;
    activationfunction* activation;

    void configureHiddenLayers(int number_of_hiddenlayers);
    void save_weights(NeuronLayer* neuronlayer, int number_of_inputs, QTextStream* filestream);
    void saveWeights(QString fileName);
    void assignrandomweights(NeuronLayer* neurallayer);
    void assignRandomBias(NeuronLayer* neurallayer);
    void load_Weights(NeuronLayer* neuronlayer, int number_of_inputs, QTextStream* filestream);
    void loadWeights(QString fileName);
    double trainNetwork();
    int BestOutput( double *vector );
    void feedforward(NeuronLayer* neuronlayer, double inputs[]);
    void backPropagate();
    void backpropagate(NeuronLayer* frontlayer, NeuronLayer* backlayer);
    void updateweights(NeuronLayer* neuronlayer, double* input_activiation);
    void shuffledata();
   //double sigmoid( double val );
    //double sigmoidDerivative( double val );
    double* testNetwork(LetterStructure testPattern);
    void assignRandomWeights();
    double RAND_WEIGHT();
    void feedForward( );


private:
   double SSE;
   int i, sample, iterations;

   double *target;
};

#endif // NEURALNETWORK_H
