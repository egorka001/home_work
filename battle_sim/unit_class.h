#ifndef UNIT
#define UNIT

#include <iostream>

class Unit
{
    protected: 
        int _health; 
        int cHealth;
        int _strength; //max possible base damage
    public:
        Unit()
        {
            _health = 0;
            cHealth = 0;
            _strength = 0;
        }
        Unit(int uHealth, int uStrength)
        {
            _health = uHealth;
            cHealth = uHealth;
            _strength = uStrength;
        }
        bool alive()
        {
            if(_health <= 0)
                return 0;
           return 1;
        }
        void heal() { _health = cHealth; }
        void takeHit(int damage) { _health -= damage; };
        void hit(Unit& enemy)
        {
            if(_strength == 0) return;
            int damage = rand() % _strength + 1;
            enemy.takeHit(damage);
        }
        void printStat()
        {
            std::cout << "hp: " << _health << ' ';
            if(_health < 100 && _health > 10)
                std::cout << ' ';
            if (_health >= 0 && _health < 10)
                std::cout << "  ";
            if(_health <= -1 && _health > -10)
                std::cout << ' ';
        }
        virtual void roar() { std::cout << "I am just a unit!\n"; }
};

#endif
