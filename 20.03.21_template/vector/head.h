#ifndef HEAD
#define HEAD

template <class Type>
class Vector
{
private:
    Type* _data;
    int _size;
    int _capacity;
    const double mult = 1.5;
private:
    Vector()
    {
        _data = nullptr;
        _size = 0;
        _capacity = 0;
    }
    Vector(int capacity)
    {
        _capacity = capacity;
        _data = new Type[_capacity];
    }
    Vector(Type* data, int size)
    {
        _size = size;
        _capacity = _size * mult;
        Vector(_capacity);
        for (int i = 0; i < _size; ++i)
            _data[i] = data[i];
    }
    ~Vector()
    {
        delete[] _data;
    }
};

#endif
