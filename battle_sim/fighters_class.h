#ifndef FIGHTERS
#define FIGHTERS
#include <iostream>
#include "unit_class.h"

class Alien : public Unit
{
    public:
        Alien() : Unit() {}
        Alien(int uHealth, int uStrength) : Unit(uHealth, uStrength) {}
        virtual void roar() { std::cout << "alien"; }
};

class Predator : public Unit
{
    public:
        Predator() : Unit() {}
        Predator(int uHealth, int uStrength) : Unit(uHealth, uStrength) {}
        virtual void roar() { std::cout << "predator"; }
};

#endif
