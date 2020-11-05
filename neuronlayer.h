#ifndef NEURONLAYER_H
#include "globalVariables.h"
#define NEURONLAYER_H


struct NeuronLayer
{
    int number_of_neurons, number_of_inputs;
    double *activiation;
    double **weights;
    double *biasweight;
    double *errors;

    NeuronLayer(int _number_of_neurons, int _number_of_inputs);
    ~NeuronLayer();
};

#endif // NEURONLAYER_H
