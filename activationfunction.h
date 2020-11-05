#ifndef ACTIVATIONFUNCTION_H
#define ACTIVATIONFUNCTION_H


class activationfunction
{
public:
    activationfunction();
    virtual double activationvalue(double input) = 0;
    virtual double activationderiative(double input) = 0;
};

#endif // ACTIVATIONFUNCTION_H
