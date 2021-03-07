#ifndef FIGHTERS
#define FIGHTERS
#include <iostream>
#include "unit_class.h"

class Alien : public Unit
{
    public:
        Alien()
        {
            _health = 0;
            _strength = 0;
        }
        Alien(int uHealth, int uStrength)
        {
            _health = uHealth;
            cHealth = uHealth;
            _strength = uStrength;
        }
        void roar() { std::cout << "ashhhhh!"; }
};

class Predator : public Unit
{
    public:
        Predator()
        {
            _health = 0;
            _strength = 0;
        }
        Predator(int uHealth, int uStrength)
        {
            _health = uHealth;
            cHealth = uHealth;
            _strength = uStrength;
        }
        void roar() { std::cout << "Predator master race!"; }
};

#endif
