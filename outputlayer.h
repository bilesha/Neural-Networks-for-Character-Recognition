#ifndef OUTPUTLAYER_H
#define OUTPUTLAYER_H
#include "globalVariables.h"

struct outputlayer
{
    int number_of_outputs, number_of_inputs;
    double *activiation;
    double **weights;

    outputlayer(int _number_of_outputs, int _number_of_neurons);
    ~outputlayer();
};

#endif // OUTPUTLAYER_H
