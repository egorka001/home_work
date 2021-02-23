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

int main()
{
    Dot tmp(10, 10);
    std::cout << "xDot: " << tmp.getXDot() << '\n';
    std::cout << "yDot: " << tmp.getYDot() << '\n';
    tmp.changeXDot(-10);
    tmp.changeYDot(-10);
    std::cout << "xDot: " << tmp.getXDot() << '\n';
    std::cout << "yDot: " << tmp.getYDot() << '\n';
    return 0;
}
