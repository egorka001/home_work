#include <iostream>
#include "point.h"
#include "shape.h"
#include "ellipse.h"
#include "circle.h"
#include "quadrangle.h"

int main()
{
    std::cout << "POINT\n"; //point tests
    double x, y;
    Point p0;
    Point p1;
    Point p2(1,1);
    p1.print_info();
    p2.print_info();
    p1.set(10, 10);
    p2.get(x, y);
    p1.print_info();
    std::cout << "Get X: " << x << " Y: " << y << '\n';
    p0 = p1 - p2;
    p0.print_info();
    p0.set(1, 1);
    p1.set(-1, -1);
    std::cout << p1.length(p0);
    std::cout << '\n';

    std::cout << "SHAPE\n"; //shape tests
    Shape s1;
    std::cout << "area: " << s1.area();
    std::cout << ", perimeter : " << s1.perimeter() << '\n';
    std::cout << '\n';

    std::cout << "ELLIPSE\n"; //ellipse tests
    Shape* e1;
    e1 = new Ellipse(1, 1);
    std::cout << "area: " << e1 -> area();
    std::cout << ", perimeter : " << e1 -> perimeter() << '\n';
    std::cout << '\n';

    std::cout << "CIRCLE\n"; //circle tests
    Shape* c1;
    c1 = new Circle(1); 
    std::cout << "area: " << c1 -> area();
    std::cout << ", perimeter : " << c1 -> perimeter() << '\n';
    std::cout << '\n';

    std::cout << "QUADRANGLE\n"; //quadrangle tests
    Shape* q1;
    Point p3(1,1) , p4(2, 2);
    q1 = new Quadrangle(1, p3, p4);
    std::cout << "area: " << q1 -> area();
    std::cout << ", perimeter : " << q1 -> perimeter() << '\n';
    std::cout << '\n';
    return 0;
}
