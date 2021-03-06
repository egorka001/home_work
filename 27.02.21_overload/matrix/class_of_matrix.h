#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix
{
private:
    int _x_size;
    int _y_size;
    double** _data;

    void checkPos(int posX, int posY) const;

public:
    Matrix(); //default

    Matrix(int xSize, int ySize); //by size

    Matrix(double** inData, int xSize, int ySize); //by another matrix

    Matrix(Matrix const& obj) : Matrix(obj._data, //copy
                                 obj._x_size,
                                 obj._y_size) { }

    ~Matrix(); //destructor

    void istreamMatrix(int xSize, int ySize);
    
    void fillRandNum(int min, int max);

    int getXSize() const  { return _x_size; }
    int getYSize() const  { return _y_size; }


    double getElement(int posX, int posY) const;

    void changeElement(int posX, int posY, double value);

    double ortOfMatrix() const;

};

inline std::ostream& operator<< (std::ostream& out, Matrix const& matrix)
{
    for (int j = 0; j < matrix.getYSize(); ++j)
    {
        for (int i = 0; i < matrix.getXSize(); ++i)
            out << matrix.getElement(i, j) << '\t';
        out << '\n';
    }
    return out;
}

inline std::istream& operator>> (std::istream& in, Matrix& matrix)
{
    int x, y;
    std::cout << "Input amount of X elements: ";
    std::cin >> x;
    std::cout << "Input amount of Y elements: ";
    std::cin >> y;
    matrix.istreamMatrix(x, y);
    return in;
}

inline Matrix operator+ (Matrix const& first, Matrix const& second)
{
    if(first.getXSize() != second.getXSize() || 
       first.getYSize() != second.getYSize())
        throw "wake up neo wrong sizes!\n";
    Matrix sum(first.getXSize(), first.getYSize());
    for (int j = 0; j < first.getYSize(); ++j)
        for (int i = 0; i < first.getXSize(); ++i)
            sum.changeElement(i, j,
                    first.getElement(i, j) + second.getElement(i, j));
    return sum;
}

inline Matrix operator- (Matrix const& first, Matrix const& second)
{
    if(first.getXSize() != second.getXSize() || 
       first.getYSize() != second.getYSize())
        throw "wake up neo wrong sizes!\n";
    Matrix sub(first.getXSize(), first.getYSize());
    for (int j = 0; j < first.getYSize(); ++j)
        for (int i = 0; i < first.getXSize(); ++i)
            sub.changeElement(i, j,
                    first.getElement(i, j) - second.getElement(i, j));
    return sub;
}

inline Matrix operator* (Matrix const& second, Matrix const& first)
{
    if(first.getXSize() != second.getYSize())
        throw "wake up neo wrong sizes!\n";
    Matrix mult(first.getYSize(), second.getXSize());
    for (int i = 0; i < first.getYSize(); ++i)
        for (int j = 0; j < second.getXSize(); ++j)
            for (int k = 0; k < first.getXSize(); ++k)
                mult.changeElement(i, j,
                        mult.getElement(i, j) + 
                        first.getElement(i, k) * 
                        second.getElement(k, j));
    return mult;
}

#endif
