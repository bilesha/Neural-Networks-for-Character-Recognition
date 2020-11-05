#ifndef INPUTLAYER_H
#define INPUTLAYER_H
#include "globalVariables.h"

struct inputlayer
{
    int number_of_inputs;
    double *activiation;

    inputlayer(int _number_of_inputs);
    ~inputlayer();
};

#endif // INPUTLAYER_H
