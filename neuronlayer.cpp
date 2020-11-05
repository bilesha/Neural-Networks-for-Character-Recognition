#include "neuronlayer.h"


NeuronLayer::NeuronLayer(int _number_of_neurons, int _number_of_inputs)
{
    number_of_neurons = _number_of_neurons;
    number_of_inputs = _number_of_inputs;
    activiation = new double[number_of_neurons];
    weights = new double* [number_of_neurons];
    errors = new double [number_of_neurons];
    for (int i = 0; i< number_of_neurons; i++ )
    {
        weights[i] = new double[number_of_inputs];
    }

    biasweight = new double[number_of_neurons];
}

NeuronLayer::~NeuronLayer()
{
    delete[] activiation;
    for (int i = 0; i< number_of_neurons; i++ )
    {
        delete[] weights[i];
    }
    delete[] weights;

    delete[] biasweight;

    delete[] errors;
}
