#ifndef CIRCLE
#define CIRCLE

#include "ellipse.h"

class Circle : public Ellipse
{
    public:
        Circle() : Ellipse(0, 0) {}
        Circle(double uRad) : Ellipse(uRad, uRad) {}
};

#endif
