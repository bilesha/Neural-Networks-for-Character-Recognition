#include "activationfunctionsigmoid.h"
#include <math.h>

activationfunctionsigmoid::activationfunctionsigmoid()
{

}

double activationfunctionsigmoid::activationvalue(double input)
{
    return (1.0 / (1.0 + exp(-input)));
}

double activationfunctionsigmoid::activationderiative(double input)
{
    return ( input * (1.0 - input) );
}
