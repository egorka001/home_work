#include <iostream>
#include <cmath>
#include "class_of_matrix.h"

void Matrix::checkPos(int posX, int posY) const
{
    if (posX >= _x_size || posY >= _y_size)
        throw "out of bounds!!@!!11!!\n";
}

Matrix::Matrix() //default
{
    _x_size = 0;
    _y_size = 0;
    _data = nullptr;
}

Matrix::Matrix(int xSize, int ySize) //by size
{
    _x_size = xSize;
    _y_size = ySize;
    _data = new double* [_x_size];
    for (int i = 0; i < _x_size; ++i)
      _data[i] = new double [_y_size];
}

Matrix::Matrix(double** inData, int xSize, int ySize) //by another matrix
{
    Matrix(xSize, ySize);
    for (int i = 0; i < _x_size; ++i)
        for (int j = 0; j < _y_size; ++j)
            _data[i][j] = inData[i][j];
}

Matrix::~Matrix() //destructor
{
    for (int i = 0; i < _x_size; ++i)
        delete[] _data[i];
    delete[] _data;
}

void Matrix::istreamMatrix(int xSize, int ySize)
{
    if (_data != nullptr)
        throw "acces denied!!!\n";
    _x_size = xSize;
    _y_size = ySize;
    _data = new double* [_x_size];
     for (int i = 0; i < _x_size; ++i)
        _data[i] = new double [_y_size];
}

void Matrix::fillRandNum(int min, int max)
{
    for (int j = 0; j < _y_size; ++j)
        for (int i = 0; i < _x_size; ++i)
            _data[i][j] = (rand() % (10 * max) - 10 * min) / 10.0;
}

double Matrix::getElement(int posX, int posY) const
{
    checkPos(posX, posY);
    return _data[posX][posY];
}

void Matrix::changeElement(int posX, int posY, double value)
{
    checkPos(posX, posY);
    _data[posX][posY] = value;
}

double Matrix::ortOfMatrix() const
{
    double ort = 0;
    for (int j = 0; j < _y_size; ++j)
        for (int i = 0; i < _x_size; ++i)
            ort += _data[i][j] * _data[i][j];
    return sqrt(ort);
}
