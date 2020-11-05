#ifndef ACTIVIATIONFUNCTIONRELU_H
#define ACTIVIATIONFUNCTIONRELU_H
#include "activationfunction.h"

class activationfunctionrelu: public activationfunction
{
public:
    activationfunctionrelu();
    virtual double activationvalue(double input);
    virtual double activationderiative(double input);
};

#endif // ACTIVIATIONFUNCTIONRELU_H
