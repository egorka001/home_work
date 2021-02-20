#include <iostream>
#include <cmath>

class Complex
{
private:
    int _re;
    int _im;

public:
    Complex()
    {
        _re = 0;
        _im = 0;
    }

    Complex(int const uRe, int const uIm)
    {
        _re = uRe;
        _im = uIm;
    }

    Complex(Complex const& uNum) : Complex(uNum._re, uNum._im){}

    void getConj(){ _im = -_im; }

    int getRe() const { return _re; }
    int getIm() const { return _im; }

    double getAbs() const { return sqrt(_re * _re + _im * _im); }

    void getPrint()
    {
        std::cout << '(' << _re << ',' << _im << ')';
    }


};

int main()
{
    Complex zero;
    Complex c_num(10, -10);
    Complex copy_c_num(c_num);

    std::cout << zero.getRe() << ' ' << zero.getIm() << '\n';
    c_num.getPrint();
    std::cout  << ' ';
    copy_c_num.getPrint();
    std::cout << '\n';
    std::cout << c_num.getAbs() << '\n';
    copy_c_num.getConj();
    copy_c_num.getPrint();
    return 0;
}
