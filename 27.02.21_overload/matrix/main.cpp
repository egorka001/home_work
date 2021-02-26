#include <iostream>
#include "class_of_matrix.h"

int main()
{
    Matrix neo;
    Matrix trinity;
    std::cout << "first\n";
    std::cin >> neo;
    std::cout << "second\n";
    std::cin >> trinity;
    neo.fillRandNum(-10, 10);
    trinity.fillRandNum(-10, 10);
    std::cout << "\nfirst matrix\n" << neo << '\n';
    std::cout << "second matrix\n" << trinity << '\n';
    std::cout << "sum of matrix\n" << neo + trinity << '\n';
    std::cout << "sub of matrix\n" << neo - trinity << '\n';
    std::cout << "multi of matrix\n" << neo * trinity << '\n';
    return 0;
}
