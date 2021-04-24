#include <iostream>
#include "head.h"
int main()
{
    
    BSTree<int> tree;
    
    tree.push(10);
    tree.push(3);
    tree.push(5);
    tree.push(12);
    tree.push(2);
    tree.print();
    return 0;
    
}
