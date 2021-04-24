#ifndef ELLIPSE
#define ELLIPSE

#include <cmath>
#include "shape.h"

const double PI = 3.141592653;

class Ellipse : public Shape
{
    protected:
        double _a;
        double _b;
    public:
        Ellipse() : _a(0), _b(0) {}
        Ellipse(double uA, double uB) : _a(uA), _b(uB) {}; 
        double area() { return PI * _a * _b; }
        double perimeter() 
        { 
            return 2 * PI * sqrt((_a * _a + _b * _b) / 2); 
        }

};

#endif
