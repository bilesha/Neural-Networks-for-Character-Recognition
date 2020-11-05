#include "activationfunctionrelu.h"
#include <math.h>
activationfunctionrelu::activationfunctionrelu()
{
    
}
double activationfunctionrelu::activationvalue(double input)
{
    return (fmax(0, input) );
}
double activationfunctionrelu::activationderiative(double input)
{
    if (input <= 0 )
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
