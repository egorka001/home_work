#include <iostream>
#include <cmath>

class Matrix
{
private:
    int _x_size;
    int _y_size;
    double** _data;

    void checkPos(int posX, int posY) const
    {
        if (posX >= _x_size || posY >= _y_size)
            throw "out of bounds!!@!!11!!\n";
    }

public:
    Matrix() //default
    {
        _x_size = 0;
        _y_size = 0;
        _data = nullptr;
    }

    Matrix(int xSize, int ySize) //by size
    {
        _x_size = xSize;
        _y_size = ySize;
        _data = new double* [_x_size];
        for (int i = 0; i < _x_size; ++i)
           _data[i] = new double [_y_size];
    }

    Matrix(double** inData, int xSize, int ySize) //by another matrix
    {
        Matrix(xSize, ySize);
        for (int i = 0; i < _x_size; ++i)
            for (int j = 0; j < _y_size; ++j)
                _data[i][j] = inData[i][j];
    }

    Matrix(Matrix const& obj) : Matrix(obj._data, //copy
                                 obj._x_size,
                                 obj._y_size)
    {
        std::cout << "copy!\n";
    }

    ~Matrix() //destructor
    {
        for (int i = 0; i < _x_size; ++i)
           delete[] _data[i];
        delete[] _data;
    }

    void outInCon() const
    {
        for (int j = 0; j < _y_size; ++j)
        {
            for (int i = 0; i < _x_size; ++i)
                std::cout << _data[i][j] << '\t';
            std::cout << '\n';
        }
    }

    void fillRandNum(int min, int max)
    {
        for (int j = 0; j < _y_size; ++j)
            for (int i = 0; i < _x_size; ++i)
                _data[i][j] = (rand() % (10 * max) - 10 * min) / 10.0;
    }

    int getXSize() const  { return _x_size; }

    int getYSize() const  { return _y_size; }

    double getElement(int posX, int posY) const
    {
        checkPos(posX, posY);
        return _data[posX][posY];
    }

    void changeElement(int posX, int posY, double value)
    {
        checkPos(posX, posY);
        _data[posX][posY] = value;
    }

    double ortOfMatrix() const
    {
        double ort = 0;
        for (int j = 0; j < _y_size; ++j)
            for (int i = 0; i < _x_size; ++i)
                ort += _data[i][j] * _data[i][j];
        return sqrt(ort);
    }
};

int main()
{
    int x, y;

    std::cout << "Input amount of X elements: ";
    std::cin >> x;
    std::cout << "Input amount of Y elements: ";
    std::cin >> y;

    Matrix neo(x, y);
    neo.fillRandNum(-10, 10);
    neo.outInCon();
    std::cout << "X size: " << neo.getXSize() << '\n';
    std::cout << "Y size: " << neo.getYSize() << '\n';
    std::cout << "Ort: " << neo.ortOfMatrix() << '\n';
    return 0;
}
