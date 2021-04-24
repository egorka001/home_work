#ifndef POINT
#define POINT

#include <iostream>
#include <cmath>

class Point
{
    private:
        double _x;
        double _y;
    public:
        Point() : _x(0), _y(0) {}
        Point(double uX, double uY) : _x(uX), _y(uY) {}
        Point(Point const& uP) : Point(uP._x, uP._y) {} 
        void get(double& uX, double& uY) const { uX = _x; uY = _y; }
        void set(double uX, double uY) { _x = uX; _y = uY; }
        void print_info()
        {
            std::cout << "X: " << _x << " Y: " << _y << '\n'; 
        }        

        double length(Point p1)
        {
            p1 = p1 - *this; 
            double x, y;
            p1.get(x, y);
            return sqrt(x * x + y * y); 
        }

        Point operator= (Point p1)
        {
            p1.get(_x, _y);
            return *this;
        }

        Point operator+ (Point p1)
        {
            Point sum;
            double x1, y1;
            p1.get(x1, y1);
            sum.set(_x + x1, _y + y1);
            return sum;
        }

        Point operator- (Point p1)
        {
            Point diff;
            double x1, y1;
            p1.get(x1, y1);
            diff.set(_x - x1, _y - y1);
            return diff;
        }
};

#endif
