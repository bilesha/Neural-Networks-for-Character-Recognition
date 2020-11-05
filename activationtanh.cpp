#include "activationtanh.h"
#include <math.h>

activationtanh::activationtanh()
{

}
double activationtanh::activationvalue(double input)
{
    return tanh(input);
}

double activationtanh::activationderiative(double input)
{
    return 1 - input * input;

}
