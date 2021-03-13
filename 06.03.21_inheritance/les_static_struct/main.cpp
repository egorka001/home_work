#include <iostream>

struct A
{
    static int x;
    A() {}
    A(int y) { std::cout << "A1\n"; }
    A(int y, int z) { std::cout << "A2\n"; }
};

int A::x = 0;

struct B : A {};

int main()
{
    A a;
    B b;
    a.x = 2;
    std::cout << "Static: " << b.x << '\n';
    return 0;
}
