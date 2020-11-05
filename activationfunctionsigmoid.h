#ifndef ACTIVATIONFUNCTIONSIGMOID_H
#define ACTIVATIONFUNCTIONSIGMOID_H
#include "activationfunction.h"

class activationfunctionsigmoid: public activationfunction
{
public:
    activationfunctionsigmoid();
    virtual double activationvalue(double input);
    virtual double activationderiative(double input);
};

#endif // ACTIVIATIONFUNCTIONSIGMOID_H
