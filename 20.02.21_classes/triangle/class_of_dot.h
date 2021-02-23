#ifndef DOT_H
#define DOT_H

#include <iostream>

class Dot
{
    private:
        double _x;
        double _y;
    public:
        Dot()
        {
            _x = 0;
            _y = 0;
        }

        Dot(double uX, double uY)
        {
            _x = uX;
            _y = uY;
        }

        double getXDot() const { return _x; }
        double getYDot() const { return _y; }

        void changeXDot(double uX) { _x = uX; }
        void changeYDot(double uY) { _y = uY; }
};

#endif
