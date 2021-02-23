#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <cmath>
#include "class_of_dot.h"

class Triangle
{
    private:
        Dot _dot1;
        Dot _dot2;
        Dot _dot3;
    public:
        Triangle() : _dot1(0, -1), 
                     _dot2(sqrt(0.5), sqrt(0.5)),
                     _dot3(-sqrt(0.5), sqrt(0.5)){}

        Triangle(double uX1, double uY1,
                 double uX2, double uY2,
                 double uX3, double uY3)
        {
            _dot1.changeXDot(uX1);
            _dot1.changeYDot(uY1);
            _dot2.changeXDot(uX2);
            _dot2.changeYDot(uY2);
            _dot3.changeXDot(uX3);
            _dot3.changeYDot(uY3);
        }

        void printTriangle()
        {
            std::cout << "(" << _dot1.getXDot() << "; ";
            std::cout  << _dot1.getYDot() << ")\n";
            std::cout << "(" << _dot2.getXDot() << "; ";
            std::cout  << _dot2.getYDot() << ")\n";
            std::cout << "(" << _dot3.getXDot() << "; ";
            std::cout  << _dot3.getYDot() << ")\n";
        }
};

#endif
