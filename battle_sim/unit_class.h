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
            std::cout << "Health: " << _health << ' ';
            std::cout << "Strength: " << _strength << '\n';
        }
};


#endif
