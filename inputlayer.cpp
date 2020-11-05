#include "inputlayer.h"

inputlayer::inputlayer(int _number_of_inputs)
{
    number_of_inputs = _number_of_inputs;
    activiation = new double[number_of_inputs];


}

inputlayer::~inputlayer()
{
    delete[] activiation;
}
