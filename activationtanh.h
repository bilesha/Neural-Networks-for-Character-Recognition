#ifndef ACTIVATIONTANH_H
#define ACTIVATIONTANH_H
#include "activationfunction.h"

class activationtanh: public activationfunction
{
public:
    activationtanh();
    virtual double activationvalue(double input);
    virtual double activationderiative(double input);
};

#endif // ACTIVATIONTANH_H
