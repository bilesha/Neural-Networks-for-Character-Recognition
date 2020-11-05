#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "globalVariables.h"
#include "activationfunctionsigmoid.h"
#include "activationtanh.h"
#include "activationfunctionrelu.h"

//--------------------------------------

LetterStructure letters[20001];
//LetterStructure testPattern;

bool patternsLoadedFromFile;
int MAX_EPOCHS;
double LEARNING_RATE;


///////////////////////////////////////////////////////

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //---------------------------------------
    //initialisation of global variables
    //
    patternsLoadedFromFile = false;
    MAX_EPOCHS = 50;

    //bp = new Backpropagation;
    nn = new neuralnetwork;

    //---------------------------------------
    //initialise widgets

    ui->spinBox_training_Epochs->setValue(MAX_EPOCHS);
    ui->spinBox_HiddenLayers->setValue(NUMBER_OF_TRAINING_PATTERNS);
    ui->horizScrollBar_LearningRate->setValue(int(nn->LEARNING_RATE*100));
    ui->comboBox->addItem("Sigmoid");
    ui->comboBox->addItem("TanH");
    ui->comboBox->addItem("Relu");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Read_File_clicked()
{
    qDebug() << "\nReading file...";
    QFile file("complete_data_set.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    if(!file.exists()){
        patternsLoadedFromFile=false;
        qDebug() << "Data file does not exist!";
        return;
    }

    QTextStream in(&file);


    char t;
    char characterSymbol;
    QString line;

    int counterForLetterA=0;
    int counterForLetterB=0;
    int counterForUnknownLetters=0;
    QString lineOfData;
    QString msg;
    int i=0;
    int counts[27];
    for (int j = 0; j < 27; j++)
    {
        counts[j] = 0;
    }
    while(i < NUMBER_OF_PATTERNS){

        //e.g. T,2,8,3,5,1,8,13,0,6,6,10,8,0,8,0,8
        in >> characterSymbol >> t >> letters[i].f[0] >> t >>  letters[i].f[1] >> t >>  letters[i].f[2] >> t >>  letters[i].f[3] >> t >>  letters[i].f[4] >> t >>  letters[i].f[5] >> t >>  letters[i].f[6] >> t >>  letters[i].f[7] >> t >>  letters[i].f[8] >> t >>  letters[i].f[9] >> t >>  letters[i].f[10] >> t >>  letters[i].f[11] >> t >> letters[i].f[12] >> t >> letters[i].f[13] >> t >> letters[i].f[14] >> t >> letters[i].f[15];

        line = in.readLine();
        setTestPatternOutputs(characterSymbol, &letters[i]);
        counts[letters[i].symbol]++;

        if( i == (NUMBER_OF_PATTERNS-1)) {
            msg.clear();
            lineOfData.clear();
            for(int k = 0; k <27; k++)
            {
            char letter = 'A' + k;
            QTextStream(&lineOfData) << "number of patterns for Letter " << letter << " = " << counts[k] << endl;
            msg.append(lineOfData);
            lineOfData.clear();
            }

            ui->plainTextEdit_results->setPlainText(msg);
            qApp->processEvents();
        }

        i++;
    }

    msg.append("done.");

    ui->plainTextEdit_results->setPlainText(msg);
    qApp->processEvents();

    patternsLoadedFromFile=true;

}

void MainWindow::pushButton_ApplyFunction_and_HiddenLayer()
{
    QString text = ui->comboBox->currentText();
    if (text == "Sigmoid")
    {
        nn->activation = new activationfunctionsigmoid;
    }
    else if(text == "Tanh")
    {
        nn->activation = new activationtanh;

    }
    else if(text == "Relu")
    {
        nn->activation = new activationfunctionrelu;
    }
}
void MainWindow::on_horizScrollBar_LearningRate_valueChanged(int value)
{
    ui->lcdNumber_LearningRate->setSegmentStyle(QLCDNumber::Filled);
    ui->lcdNumber_LearningRate->display(value/1000.0);
    LEARNING_RATE = value/1000.0;
}

void MainWindow::on_pushButton_Classify_Test_Pattern_clicked()
{
    LetterStructure testPattern;

    char characterSymbol, t;
    QString *q;
    double* classificationResults;

    double* outputs;
    outputs = new double[OUTPUT_NEURONS];

    classificationResults = new double[OUTPUT_NEURONS];

    //QTextStream line;
    q = new QString(ui->plainTextEdit_Input_Pattern->toPlainText());

    QTextStream line(q);

    line >> characterSymbol >> t >> testPattern.f[0] >> t >>  testPattern.f[1] >> t >>  testPattern.f[2] >> t >>  testPattern.f[3] >> t >>  testPattern.f[4] >> t >>  testPattern.f[5] >> t >>  testPattern.f[6] >> t >>  testPattern.f[7] >> t >>  testPattern.f[8] >> t >>  testPattern.f[9] >> t >>  testPattern.f[10] >> t >>  testPattern.f[11] >> t >> testPattern.f[12] >> t >> testPattern.f[13] >> t >> testPattern.f[14] >> t >> testPattern.f[15];

    setTestPatternOutputs(characterSymbol, &testPattern);

    //Classify Test Pattern button
    classificationResults = nn->testNetwork(testPattern);

    ui->lcdNumber_A->display(classificationResults[0]);
    ui->lcdNumber_B->display(classificationResults[1]);
    ui->lcdNumber_C->display(classificationResults[2]);
    ui->lcdNumber_D->display(classificationResults[3]);
    ui->lcdNumber_E->display(classificationResults[4]);
    ui->lcdNumber_F->display(classificationResults[5]);
    ui->lcdNumber_G->display(classificationResults[6]);
    ui->lcdNumber_H->display(classificationResults[7]);
    ui->lcdNumber_I->display(classificationResults[8]);
    ui->lcdNumber_J->display(classificationResults[9]);
    ui->lcdNumber_K->display(classificationResults[10]);
    ui->lcdNumber_L->display(classificationResults[11]);
    ui->lcdNumber_M->display(classificationResults[12]);
    ui->lcdNumber_N->display(classificationResults[13]);
    ui->lcdNumber_O->display(classificationResults[14]);
    ui->lcdNumber_P->display(classificationResults[15]);
    ui->lcdNumber_Q->display(classificationResults[16]);
    ui->lcdNumber_R->display(classificationResults[17]);
    ui->lcdNumber_S->display(classificationResults[18]);
    ui->lcdNumber_T->display(classificationResults[19]);
    ui->lcdNumber_U->display(classificationResults[20]);
    ui->lcdNumber_V->display(classificationResults[21]);
    ui->lcdNumber_W->display(classificationResults[22]);
    ui->lcdNumber_X->display(classificationResults[23]);
    ui->lcdNumber_Y->display(classificationResults[24]);
    ui->lcdNumber_Z->display(classificationResults[25]);


    //-----------------------------------------------------------
    for(int k=0; k < OUTPUT_NEURONS; k++){
       outputs[k] = testPattern.outputs[k];
    }
    //-----------------------------------------------------------
     QString textClassification =  "letter ";
     int best_output = nn->BestOutput(outputs);
     if (best_output < UNKNOWN)
     {
         char letter = best_output + 'A';
         textClassification+=letter;
     }
     else
     {
         textClassification = "unknown";
     }


    if (nn->BestOutput(classificationResults) == nn->BestOutput(outputs)) {
        qDebug() << "correct classification.";
        ui->label_Classification->setText(textClassification + ", - Correct classification!");
    } else {
        qDebug() << "incorrect classification.";
        ui->label_Classification->setText(textClassification + ", -XXX- Incorrect classification.");
    }

}

void MainWindow::on_pushButton_Train_Network_Max_Epochs_clicked()
{
    double SSE = 0.0;
    QString msg;

    if(!patternsLoadedFromFile) {
        msg.clear();
        msg.append("\nMissing training patterns.  Load data set first.\n");
        ui->plainTextEdit_results->setPlainText(msg);
        return;
    }

    MAX_EPOCHS = ui->spinBox_training_Epochs->value();
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
    int e=0;
    for(int i=0; i < MAX_EPOCHS; i++){
      msg.clear();
      msg.append("\nTraining in progress...\n");

      SSE = nn->trainNetwork(); //trains for 1 epoch
      ui->lcdNumber_SSE->display(SSE);

      qApp->processEvents();

      update();
      e++;
//      qDebug() << "epoch: " << e << ", SSE = " << SSE;
      msg.append("\nEpoch=");
      msg.append(QString::number(e));
      ui->plainTextEdit_results->setPlainText(msg);

      if((i > 0) && ((i % 100) == 0)) {
         nn->saveWeights(ui->plainTextEdit_saveWeightsAs->toPlainText());

         ui->plainTextEdit_results->setPlainText("Weights saved into file.");
         qApp->processEvents();
      }

    }
    QApplication::restoreOverrideCursor();

}

void MainWindow::on_pushButton_Initialise_Network_clicked()
{
    nn->initialise();
}

void MainWindow::on_pushButton_Save_Weights_clicked()
{
    nn->saveWeights(ui->plainTextEdit_saveWeightsAs->toPlainText());

    QString msg;
    QString lineOfText;

    lineOfText = "weights saved to file: " + ui->plainTextEdit_saveWeightsAs->toPlainText();

    msg.append(lineOfText);

    ui->plainTextEdit_results->setPlainText(msg);

}

void MainWindow::on_pushButton_Load_Weights_clicked()
{
   nn->loadWeights(ui->plainTextEdit_fileNameLoadWeights->toPlainText());

   QString msg;

   msg.append("weights loaded.\n");

   ui->plainTextEdit_results->setPlainText(msg);


}

void MainWindow:: on_pushButton_Shuffle_Data_clicked()
{
    nn->shuffledata();

    QString msg;

    msg.append("Data was shuffled.\n");

    ui->plainTextEdit_results->setPlainText(msg);
}
void MainWindow::setTestPatternOutputs(char letter, LetterStructure* letterstructure)
{
    for (int output = 0; output < OUTPUT_NEURONS; output++)
    {
        letterstructure->outputs[output] = 0;
    }
    if (letter <= 'Z')
    {
        letterstructure->symbol= (Symbol)(letter-'A');
    }
    else {
        letterstructure->symbol= Symbol::UNKNOWN;

    }
    letterstructure->outputs[letterstructure->symbol] = 1;
    for (int i =0; i < INPUT_NEURONS; i++)
    {
        letterstructure->f[i]/=15;
    }

}
//Test Network on TEST SET
void MainWindow::on_pushButton_Test_All_Patterns_clicked()
{
    char characterSymbol;

    double* classificationResults;
    double* outputs;
    int correctClassifications=0;

    classificationResults = new double[OUTPUT_NEURONS];
    outputs = new double[OUTPUT_NEURONS];

    for(int i=NUMBER_OF_TRAINING_PATTERNS; i < NUMBER_OF_PATTERNS; i++){

            //This part could be implemented more concisel
            //---------------------------------
            classificationResults = nn->testNetwork(letters[i]);

            for(int k=0; k < OUTPUT_NEURONS; k++){
               outputs[k] = letters[i].outputs[k];
            }

            if (nn->BestOutput(classificationResults) == nn->BestOutput(outputs)) {
                 correctClassifications++;
            }

        }


      qDebug() << "TEST SET: correctClassifications = " << correctClassifications;

      QString msg;

      msg.clear();
      QTextStream(&msg) << "TEST SET: correctClassifications = " << correctClassifications << endl;


      ui->plainTextEdit_results->setPlainText(msg);
      qApp->processEvents();
      double percent = ((double)correctClassifications/(NUMBER_OF_PATTERNS - NUMBER_OF_TRAINING_PATTERNS))*100;
      ui->lcdNumber_percentageOfGoodClassification->display(percent);
}

void MainWindow::on_pushButton_testNetOnTrainingSet_clicked()
{
    char characterSymbol;

    double* classificationResults;
    double* outputs;
    int correctClassifications=0;

    classificationResults = new double[OUTPUT_NEURONS];
    outputs = new double[OUTPUT_NEURONS];

    for(int i=0; i < NUMBER_OF_TRAINING_PATTERNS; i++){

            //---------------------------------
            classificationResults = nn->testNetwork(letters[i]);

            for(int k=0; k < OUTPUT_NEURONS; k++){
               outputs[k] = letters[i].outputs[k];
            }

            if (nn->BestOutput(classificationResults) == nn->BestOutput(outputs)) {
                 correctClassifications++;
            }

     }
     qDebug() << "TRAINING SET: correctClassifications = " << correctClassifications;
     QString msg;

     msg.clear();
     QTextStream(&msg) << "TRAINING SET: correctClassifications = " << correctClassifications << endl;


     ui->plainTextEdit_results->setPlainText(msg);
     qApp->processEvents();

     double percent = ((double)correctClassifications/(NUMBER_OF_TRAINING_PATTERNS))*100;
     ui->lcdNumber_percentageOfGoodClassification->display(percent);

}

void MainWindow::on_horizScrollBar_LearningRate_actionTriggered(int action)
{
   if(action == 0)
   {

   }
}
