#ifndef QUADRANGLE
#define QUADRANGLE

#include "point.h"
#include "shape.h"

class Quadrangle : public Shape
{
    protected:
        double _side;
        Point _p1;
        Point _p2;
    public:
        Quadrangle() : _side(0), _p1(0, 0), _p2(0, 0) {}
        Quadrangle(double uSide, Point uP1, Point uP2) : _side(uSide), 
                                                         _p1(uP1),
                                                         _p2(uP2) {}
        double area() { return 1; }
        double perimeter() { return 1; } 
};

#endif
