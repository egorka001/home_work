#include <iostream>

template <class T>
struct remove_ref
{
    typedef T type;
};

template <class T>
struct remove_ref<T&>
{
    typedef T type;
};

int main()
{
    remove_ref<int>::type x = 1;
    std::cout << x << '\n';
    return 0;
}
