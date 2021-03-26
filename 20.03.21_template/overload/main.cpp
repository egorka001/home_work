#include <iostream>

template <class T>
bool is_int(T x)
{
    return 0;
}

bool is_int(int x)
{
    return 1;
}

int main()
{
    int _int;
    double _double;

    std::cout << is_int(_int) << '\n';
    std::cout << is_int(_double) << '\n';

    return 0;
}
