#pragma once

template <class Type>
class Vector
{
private:
    Type* _data;
    size_t _size;
    size_t _capacity;
private:
    Vector(Vector const& vec);
    ~Vector();
    Vector& operator=(Vector const& vec);

    Vector();
    Vector(size_t capacity);
    Vector(Type* data, size_t size);
};
