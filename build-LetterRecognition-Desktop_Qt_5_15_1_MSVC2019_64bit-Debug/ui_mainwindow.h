/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Read_File;
    QPushButton *pushButton_Initialise_Network;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_Train_Network_Max_Epochs;
    QSpinBox *spinBox_training_Epochs;
    QPushButton *pushButton_Test_All_Patterns;
    QPushButton *pushButton_testNetOnTrainingSet;
    QFrame *line_6;
    QLabel *label_9;
    QPlainTextEdit *plainTextEdit_saveWeightsAs;
    QPushButton *pushButton_Save_Weights;
    QFrame *line_5;
    QLabel *label_8;
    QPlainTextEdit *plainTextEdit_fileNameLoadWeights;
    QPushButton *pushButton_Load_Weights;
    QFrame *line_3;
    QPushButton *pushButton_Shuffle_Data;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_36;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_37;
    QSpinBox *spinBox_HiddenLayers;
    QPushButton *pushButton_ApplyFunction_and_HiddenLayer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QScrollBar *horizScrollBar_LearningRate;
    QLCDNumber *lcdNumber_LearningRate;
    QFrame *line;
    QFrame *line_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QPlainTextEdit *plainTextEdit_results;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLCDNumber *lcdNumber_H;
    QLabel *label_16;
    QLCDNumber *lcdNumber_I;
    QLabel *label_17;
    QLCDNumber *lcdNumber_J;
    QLabel *label_18;
    QLCDNumber *lcdNumber_K;
    QLabel *label_19;
    QLCDNumber *lcdNumber_L;
    QLabel *label_20;
    QLCDNumber *lcdNumber_M;
    QLabel *label_21;
    QLCDNumber *lcdNumber_N;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_SSE;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLCDNumber *lcdNumber_percentageOfGoodClassification;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_Classification;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QLCDNumber *lcdNumber_O;
    QLabel *label_23;
    QLCDNumber *lcdNumber_P;
    QLabel *label_24;
    QLCDNumber *lcdNumber_Q;
    QLabel *label_25;
    QLCDNumber *lcdNumber_R;
    QLabel *label_26;
    QLCDNumber *lcdNumber_S;
    QLabel *label_27;
    QLCDNumber *lcdNumber_T;
    QLabel *label_28;
    QLCDNumber *lcdNumber_U;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLCDNumber *lcdNumber_A;
    QLabel *label_5;
    QLCDNumber *lcdNumber_B;
    QLabel *label_6;
    QLCDNumber *lcdNumber_C;
    QLabel *label_12;
    QLCDNumber *lcdNumber_D;
    QLabel *label_13;
    QLCDNumber *lcdNumber_E;
    QLabel *label_14;
    QLCDNumber *lcdNumber_F;
    QLabel *label_29;
    QLCDNumber *lcdNumber_G;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_30;
    QLCDNumber *lcdNumber_V;
    QLabel *label_31;
    QLCDNumber *lcdNumber_W;
    QLabel *label_32;
    QLCDNumber *lcdNumber_X;
    QLabel *label_33;
    QLCDNumber *lcdNumber_Y;
    QLabel *label_34;
    QLCDNumber *lcdNumber_Z;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_Classify_Test_Pattern;
    QPlainTextEdit *plainTextEdit_Input_Pattern;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1665, 892);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(13, 10, 360, 801));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Read_File = new QPushButton(verticalLayoutWidget);
        pushButton_Read_File->setObjectName(QString::fromUtf8("pushButton_Read_File"));

        verticalLayout->addWidget(pushButton_Read_File);

        pushButton_Initialise_Network = new QPushButton(verticalLayoutWidget);
        pushButton_Initialise_Network->setObjectName(QString::fromUtf8("pushButton_Initialise_Network"));

        verticalLayout->addWidget(pushButton_Initialise_Network);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_Train_Network_Max_Epochs = new QPushButton(verticalLayoutWidget);
        pushButton_Train_Network_Max_Epochs->setObjectName(QString::fromUtf8("pushButton_Train_Network_Max_Epochs"));

        horizontalLayout_8->addWidget(pushButton_Train_Network_Max_Epochs);

        spinBox_training_Epochs = new QSpinBox(verticalLayoutWidget);
        spinBox_training_Epochs->setObjectName(QString::fromUtf8("spinBox_training_Epochs"));
        spinBox_training_Epochs->setMaximum(9999);
        spinBox_training_Epochs->setValue(50);

        horizontalLayout_8->addWidget(spinBox_training_Epochs);


        verticalLayout->addLayout(horizontalLayout_8);

        pushButton_Test_All_Patterns = new QPushButton(verticalLayoutWidget);
        pushButton_Test_All_Patterns->setObjectName(QString::fromUtf8("pushButton_Test_All_Patterns"));

        verticalLayout->addWidget(pushButton_Test_All_Patterns);

        pushButton_testNetOnTrainingSet = new QPushButton(verticalLayoutWidget);
        pushButton_testNetOnTrainingSet->setObjectName(QString::fromUtf8("pushButton_testNetOnTrainingSet"));

        verticalLayout->addWidget(pushButton_testNetOnTrainingSet);

        line_6 = new QFrame(verticalLayoutWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        plainTextEdit_saveWeightsAs = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit_saveWeightsAs->setObjectName(QString::fromUtf8("plainTextEdit_saveWeightsAs"));

        verticalLayout->addWidget(plainTextEdit_saveWeightsAs);

        pushButton_Save_Weights = new QPushButton(verticalLayoutWidget);
        pushButton_Save_Weights->setObjectName(QString::fromUtf8("pushButton_Save_Weights"));

        verticalLayout->addWidget(pushButton_Save_Weights);

        line_5 = new QFrame(verticalLayoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        plainTextEdit_fileNameLoadWeights = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit_fileNameLoadWeights->setObjectName(QString::fromUtf8("plainTextEdit_fileNameLoadWeights"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit_fileNameLoadWeights->sizePolicy().hasHeightForWidth());
        plainTextEdit_fileNameLoadWeights->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(plainTextEdit_fileNameLoadWeights);

        pushButton_Load_Weights = new QPushButton(verticalLayoutWidget);
        pushButton_Load_Weights->setObjectName(QString::fromUtf8("pushButton_Load_Weights"));

        verticalLayout->addWidget(pushButton_Load_Weights);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        pushButton_Shuffle_Data = new QPushButton(verticalLayoutWidget);
        pushButton_Shuffle_Data->setObjectName(QString::fromUtf8("pushButton_Shuffle_Data"));

        verticalLayout->addWidget(pushButton_Shuffle_Data);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_36 = new QLabel(verticalLayoutWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_36->setFont(font);

        horizontalLayout_12->addWidget(label_36);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_12->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_37 = new QLabel(verticalLayoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy2);

        horizontalLayout_13->addWidget(label_37);

        spinBox_HiddenLayers = new QSpinBox(verticalLayoutWidget);
        spinBox_HiddenLayers->setObjectName(QString::fromUtf8("spinBox_HiddenLayers"));

        horizontalLayout_13->addWidget(spinBox_HiddenLayers);


        verticalLayout->addLayout(horizontalLayout_13);

        pushButton_ApplyFunction_and_HiddenLayer = new QPushButton(verticalLayoutWidget);
        pushButton_ApplyFunction_and_HiddenLayer->setObjectName(QString::fromUtf8("pushButton_ApplyFunction_and_HiddenLayer"));

        verticalLayout->addWidget(pushButton_ApplyFunction_and_HiddenLayer);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(430, 10, 371, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizScrollBar_LearningRate = new QScrollBar(horizontalLayoutWidget);
        horizScrollBar_LearningRate->setObjectName(QString::fromUtf8("horizScrollBar_LearningRate"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizScrollBar_LearningRate->sizePolicy().hasHeightForWidth());
        horizScrollBar_LearningRate->setSizePolicy(sizePolicy3);
        horizScrollBar_LearningRate->setMaximum(500);
        horizScrollBar_LearningRate->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizScrollBar_LearningRate);

        lcdNumber_LearningRate = new QLCDNumber(horizontalLayoutWidget);
        lcdNumber_LearningRate->setObjectName(QString::fromUtf8("lcdNumber_LearningRate"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lcdNumber_LearningRate->sizePolicy().hasHeightForWidth());
        lcdNumber_LearningRate->setSizePolicy(sizePolicy4);
        lcdNumber_LearningRate->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_LearningRate->setLineWidth(1);
        lcdNumber_LearningRate->setSmallDecimalPoint(true);

        horizontalLayout->addWidget(lcdNumber_LearningRate);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(390, 0, 20, 721));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(400, 360, 1201, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(690, 210, 681, 147));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        plainTextEdit_results = new QPlainTextEdit(verticalLayoutWidget_2);
        plainTextEdit_results->setObjectName(QString::fromUtf8("plainTextEdit_results"));

        verticalLayout_2->addWidget(plainTextEdit_results);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(410, 430, 1201, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_15->setFont(font1);

        horizontalLayout_4->addWidget(label_15);

        lcdNumber_H = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_H->setObjectName(QString::fromUtf8("lcdNumber_H"));

        horizontalLayout_4->addWidget(lcdNumber_H);

        label_16 = new QLabel(horizontalLayoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        horizontalLayout_4->addWidget(label_16);

        lcdNumber_I = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_I->setObjectName(QString::fromUtf8("lcdNumber_I"));

        horizontalLayout_4->addWidget(lcdNumber_I);

        label_17 = new QLabel(horizontalLayoutWidget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);

        horizontalLayout_4->addWidget(label_17);

        lcdNumber_J = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_J->setObjectName(QString::fromUtf8("lcdNumber_J"));

        horizontalLayout_4->addWidget(lcdNumber_J);

        label_18 = new QLabel(horizontalLayoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);

        horizontalLayout_4->addWidget(label_18);

        lcdNumber_K = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_K->setObjectName(QString::fromUtf8("lcdNumber_K"));

        horizontalLayout_4->addWidget(lcdNumber_K);

        label_19 = new QLabel(horizontalLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);

        horizontalLayout_4->addWidget(label_19);

        lcdNumber_L = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_L->setObjectName(QString::fromUtf8("lcdNumber_L"));

        horizontalLayout_4->addWidget(lcdNumber_L);

        label_20 = new QLabel(horizontalLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font1);

        horizontalLayout_4->addWidget(label_20);

        lcdNumber_M = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_M->setObjectName(QString::fromUtf8("lcdNumber_M"));

        horizontalLayout_4->addWidget(lcdNumber_M);

        label_21 = new QLabel(horizontalLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font1);

        horizontalLayout_4->addWidget(label_21);

        lcdNumber_N = new QLCDNumber(horizontalLayoutWidget_4);
        lcdNumber_N->setObjectName(QString::fromUtf8("lcdNumber_N"));

        horizontalLayout_4->addWidget(lcdNumber_N);

        horizontalLayoutWidget_10 = new QWidget(centralWidget);
        horizontalLayoutWidget_10->setObjectName(QString::fromUtf8("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(430, 90, 1053, 80));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(horizontalLayoutWidget_10);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_2);

        lcdNumber_SSE = new QLCDNumber(horizontalLayoutWidget_10);
        lcdNumber_SSE->setObjectName(QString::fromUtf8("lcdNumber_SSE"));
        sizePolicy4.setHeightForWidth(lcdNumber_SSE->sizePolicy().hasHeightForWidth());
        lcdNumber_SSE->setSizePolicy(sizePolicy4);
        lcdNumber_SSE->setMinimumSize(QSize(175, 0));
        lcdNumber_SSE->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_SSE->setLineWidth(1);
        lcdNumber_SSE->setSmallDecimalPoint(true);
        lcdNumber_SSE->setDigitCount(8);

        horizontalLayout_2->addWidget(lcdNumber_SSE);

        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(horizontalLayoutWidget_10);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        lcdNumber_percentageOfGoodClassification = new QLCDNumber(horizontalLayoutWidget_10);
        lcdNumber_percentageOfGoodClassification->setObjectName(QString::fromUtf8("lcdNumber_percentageOfGoodClassification"));
        sizePolicy4.setHeightForWidth(lcdNumber_percentageOfGoodClassification->sizePolicy().hasHeightForWidth());
        lcdNumber_percentageOfGoodClassification->setSizePolicy(sizePolicy4);
        lcdNumber_percentageOfGoodClassification->setMinimumSize(QSize(275, 0));
        QFont font2;
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        lcdNumber_percentageOfGoodClassification->setFont(font2);
        lcdNumber_percentageOfGoodClassification->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_percentageOfGoodClassification->setLineWidth(1);
        lcdNumber_percentageOfGoodClassification->setSmallDecimalPoint(true);
        lcdNumber_percentageOfGoodClassification->setDigitCount(8);

        horizontalLayout_9->addWidget(lcdNumber_percentageOfGoodClassification);


        horizontalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_11->addLayout(horizontalLayout_2);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(420, 600, 991, 221));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        line_2 = new QFrame(verticalLayoutWidget_3);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        label_Classification = new QLabel(verticalLayoutWidget_3);
        label_Classification->setObjectName(QString::fromUtf8("label_Classification"));
        label_Classification->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setPointSize(12);
        label_Classification->setFont(font3);

        horizontalLayout_7->addWidget(label_Classification);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(410, 480, 1201, 51));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(horizontalLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);

        horizontalLayout_10->addWidget(label_22);

        lcdNumber_O = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_O->setObjectName(QString::fromUtf8("lcdNumber_O"));

        horizontalLayout_10->addWidget(lcdNumber_O);

        label_23 = new QLabel(horizontalLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font1);

        horizontalLayout_10->addWidget(label_23);

        lcdNumber_P = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_P->setObjectName(QString::fromUtf8("lcdNumber_P"));

        horizontalLayout_10->addWidget(lcdNumber_P);

        label_24 = new QLabel(horizontalLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font1);

        horizontalLayout_10->addWidget(label_24);

        lcdNumber_Q = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_Q->setObjectName(QString::fromUtf8("lcdNumber_Q"));

        horizontalLayout_10->addWidget(lcdNumber_Q);

        label_25 = new QLabel(horizontalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        font4.setStrikeOut(false);
        label_25->setFont(font4);

        horizontalLayout_10->addWidget(label_25);

        lcdNumber_R = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_R->setObjectName(QString::fromUtf8("lcdNumber_R"));

        horizontalLayout_10->addWidget(lcdNumber_R);

        label_26 = new QLabel(horizontalLayoutWidget_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font1);

        horizontalLayout_10->addWidget(label_26);

        lcdNumber_S = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_S->setObjectName(QString::fromUtf8("lcdNumber_S"));

        horizontalLayout_10->addWidget(lcdNumber_S);

        label_27 = new QLabel(horizontalLayoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font1);

        horizontalLayout_10->addWidget(label_27);

        lcdNumber_T = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_T->setObjectName(QString::fromUtf8("lcdNumber_T"));

        horizontalLayout_10->addWidget(lcdNumber_T);

        label_28 = new QLabel(horizontalLayoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font1);

        horizontalLayout_10->addWidget(label_28);

        lcdNumber_U = new QLCDNumber(horizontalLayoutWidget_2);
        lcdNumber_U->setObjectName(QString::fromUtf8("lcdNumber_U"));

        horizontalLayout_10->addWidget(lcdNumber_U);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(410, 380, 1201, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_5->addWidget(label_4);

        lcdNumber_A = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_A->setObjectName(QString::fromUtf8("lcdNumber_A"));

        horizontalLayout_5->addWidget(lcdNumber_A);

        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);

        lcdNumber_B = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_B->setObjectName(QString::fromUtf8("lcdNumber_B"));

        horizontalLayout_5->addWidget(lcdNumber_B);

        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);

        lcdNumber_C = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_C->setObjectName(QString::fromUtf8("lcdNumber_C"));

        horizontalLayout_5->addWidget(lcdNumber_C);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        horizontalLayout_5->addWidget(label_12);

        lcdNumber_D = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_D->setObjectName(QString::fromUtf8("lcdNumber_D"));

        horizontalLayout_5->addWidget(lcdNumber_D);

        label_13 = new QLabel(horizontalLayoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);

        horizontalLayout_5->addWidget(label_13);

        lcdNumber_E = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_E->setObjectName(QString::fromUtf8("lcdNumber_E"));

        horizontalLayout_5->addWidget(lcdNumber_E);

        label_14 = new QLabel(horizontalLayoutWidget_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        horizontalLayout_5->addWidget(label_14);

        lcdNumber_F = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_F->setObjectName(QString::fromUtf8("lcdNumber_F"));

        horizontalLayout_5->addWidget(lcdNumber_F);

        label_29 = new QLabel(horizontalLayoutWidget_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font1);

        horizontalLayout_5->addWidget(label_29);

        lcdNumber_G = new QLCDNumber(horizontalLayoutWidget_3);
        lcdNumber_G->setObjectName(QString::fromUtf8("lcdNumber_G"));

        horizontalLayout_5->addWidget(lcdNumber_G);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(480, 540, 1031, 51));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(horizontalLayoutWidget_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font1);

        horizontalLayout_6->addWidget(label_30);

        lcdNumber_V = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_V->setObjectName(QString::fromUtf8("lcdNumber_V"));

        horizontalLayout_6->addWidget(lcdNumber_V);

        label_31 = new QLabel(horizontalLayoutWidget_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font1);

        horizontalLayout_6->addWidget(label_31);

        lcdNumber_W = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_W->setObjectName(QString::fromUtf8("lcdNumber_W"));

        horizontalLayout_6->addWidget(lcdNumber_W);

        label_32 = new QLabel(horizontalLayoutWidget_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font1);

        horizontalLayout_6->addWidget(label_32);

        lcdNumber_X = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_X->setObjectName(QString::fromUtf8("lcdNumber_X"));
        lcdNumber_X->setSmallDecimalPoint(false);

        horizontalLayout_6->addWidget(lcdNumber_X);

        label_33 = new QLabel(horizontalLayoutWidget_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font1);

        horizontalLayout_6->addWidget(label_33);

        lcdNumber_Y = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_Y->setObjectName(QString::fromUtf8("lcdNumber_Y"));

        horizontalLayout_6->addWidget(lcdNumber_Y);

        label_34 = new QLabel(horizontalLayoutWidget_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font1);

        horizontalLayout_6->addWidget(label_34);

        lcdNumber_Z = new QLCDNumber(horizontalLayoutWidget_5);
        lcdNumber_Z->setObjectName(QString::fromUtf8("lcdNumber_Z"));

        horizontalLayout_6->addWidget(lcdNumber_Z);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 652, 989, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButton_Classify_Test_Pattern = new QPushButton(layoutWidget);
        pushButton_Classify_Test_Pattern->setObjectName(QString::fromUtf8("pushButton_Classify_Test_Pattern"));

        horizontalLayout_3->addWidget(pushButton_Classify_Test_Pattern);

        plainTextEdit_Input_Pattern = new QPlainTextEdit(layoutWidget);
        plainTextEdit_Input_Pattern->setObjectName(QString::fromUtf8("plainTextEdit_Input_Pattern"));

        horizontalLayout_3->addWidget(plainTextEdit_Input_Pattern);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1665, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Neural Network Application:  CHARACTER RECOGNITION", nullptr));
        pushButton_Read_File->setText(QCoreApplication::translate("MainWindow", "&Read File", nullptr));
        pushButton_Initialise_Network->setText(QCoreApplication::translate("MainWindow", "Initialise Network", nullptr));
        pushButton_Train_Network_Max_Epochs->setText(QCoreApplication::translate("MainWindow", "Train Network (max epochs)", nullptr));
        pushButton_Test_All_Patterns->setText(QCoreApplication::translate("MainWindow", "Test Network on TEST SET", nullptr));
        pushButton_testNetOnTrainingSet->setText(QCoreApplication::translate("MainWindow", "Test Network on TRAINING SET", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Save Weights as:", nullptr));
        plainTextEdit_saveWeightsAs->setPlainText(QCoreApplication::translate("MainWindow", "weights.txt", nullptr));
        pushButton_Save_Weights->setText(QCoreApplication::translate("MainWindow", "&Save Weights", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Filename of Weights to load:", nullptr));
        plainTextEdit_fileNameLoadWeights->setPlainText(QCoreApplication::translate("MainWindow", "weights.txt", nullptr));
        pushButton_Load_Weights->setText(QCoreApplication::translate("MainWindow", "Load Weights", nullptr));
        pushButton_Shuffle_Data->setText(QCoreApplication::translate("MainWindow", "Shuffle Data", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Activation Function", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Number of Hidden Layers", nullptr));
        pushButton_ApplyFunction_and_HiddenLayer->setText(QCoreApplication::translate("MainWindow", "Apply Function and Hidden Layers", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Learning rate:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Results:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Letter 'H'", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Letter 'I'", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Letter 'J'", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Letter 'K'", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Letter 'L'", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Letter 'M'", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Letter 'N'", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sum of Squared Error:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "% of Good Classification:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Classification:", nullptr));
        label_Classification->setText(QCoreApplication::translate("MainWindow", "- - - - - - - - - ", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Letter 'O'", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Letter 'P'", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Letter 'Q'", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Letter 'R'", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Letter 'S'", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Letter 'T'", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Letter 'U'", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Letter 'A'", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Letter 'B'", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Letter 'C'", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Letter 'D'", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Letter 'E'", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Letter 'F'", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Letter 'G'", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Letter 'V'", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Letter 'W'", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Letter 'X'", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Letter 'Y'", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Letter 'Z'", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Test Pattern", nullptr));
        pushButton_Classify_Test_Pattern->setText(QCoreApplication::translate("MainWindow", "Classify Test Pattern", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
