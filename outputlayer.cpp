#include "outputlayer.h"

outputlayer::outputlayer(int _number_of_output, int _number_of_inputs)
{
    number_of_outputs = _number_of_output;
    number_of_inputs = _number_of_inputs;
    activiation = new double[number_of_outputs];

    weights = new double* [number_of_outputs];
    for (int i = 0; i< number_of_outputs; i++ )
    {
        weights[i] = new double[number_of_inputs];
    }

}

outputlayer::~outputlayer()
{
    delete[] activiation;
    for (int i = 0; i< number_of_outputs; i++ )
    {
        delete[] weights[i];
    }
    delete[] weights;
}
