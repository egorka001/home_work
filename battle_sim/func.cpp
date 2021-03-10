#include <iostream>
#include "unit_class.h"
#include "fighters_class.h"
#include "header.h"

const int alien_hp = 100;
const int alien_str = 50;
const int predator_hp = 100;
const int predator_str = 50;

void fighters_born(Unit**& alien_arr, 
                   Unit**& predator_arr, 
                   int amount)
{
    alien_arr = new Unit* [amount];
    for (int i = 0; i < amount; ++i)
        alien_arr[i] = new Alien(alien_hp, alien_str);

    predator_arr = new Unit* [amount];
    for (int i = 0; i < amount; ++i)
        predator_arr[i] = new Predator(predator_hp, predator_hp);
}

void fighters_genocide(Unit** alien_arr, 
                       Unit** predator_arr, 
                       int amount)
{
    for (int i = 0; i < amount; ++i)
        delete[] alien_arr[i];

    for (int i = 0; i < amount; ++i)
        delete[] predator_arr[i];
}

bool team_alive(Unit** arr, int amount)
{
    for(int i = 0; i < amount; ++i)
        if(arr[i] -> alive())
            return 1;
    return 0;
}

int choose_fighter(Unit** arr, int amount)
{
    int number = rand() % amount;
    while(!arr[number] -> alive())
        number = rand() % amount;
    return number;
        
}

void printAllFighters(Unit** alien_arr, 
                      Unit** predator_arr, 
                      int amount)
{
    for(int i = 0; i < 25; ++i)
        std::cout << '\n';
    std::cout << "Alien forces!        Predator forces!\n";
    for(int i = 0; i < amount; ++i)
    {
        std::cout << "#" << i << "      ";
        std::cout << "/\'\'\'\\        /\'\'\'\\";
        std::cout << "     #" << i;
        std::cout << '\n';
        alien_arr[i] -> printStat();
        std::cout << "|0 0|        |0 0|";
        predator_arr[i] -> printStat(); 
        std::cout << "\n        | o |        |<^>|" << '\n';
        std::cout << "        \\___/        \\___/" << '\n';
    }
    std::cout << "\n\n\n\n\n";
}
