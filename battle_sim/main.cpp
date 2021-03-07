#include <iostream>
#include "unit_class.h"
#include "fighters_class.h"

const int amount = 5;
int alien_hp = 100;
int alien_str = 50;
int predator_hp = 50;
int predator_str = 80;

void printAllFighters(Alien** alien_arr, Predator** predator_arr)
{
    std::cout << "Alien forces!\n";
    for (int i = 0; i < amount; ++i)
        alien_arr[i] -> printStat();

    std::cout << "Predator forces!\n";
    for (int i = 0; i < amount; ++i)
        predator_arr[i] -> printStat();
}

int main()
{
    Alien** alien_arr = new Alien*[amount];
    for (int i = 0; i < amount; ++i)
        alien_arr[i] = new Alien(alien_hp, alien_str);

    Predator** predator_arr = new Predator*[amount];
    for (int i = 0; i < amount; ++i)
        predator_arr[i] = new Predator(predator_hp, predator_hp);

    printAllFighters(alien_arr, predator_arr);
    
    while(true)
    {
        alien_arr[]
    }
/*
    alien_arr[1] -> hit(*alien_arr[2]);

    std::cout << "\n";
    printAllFighters(alien_arr);

    alien_arr[2] -> heal();

    std::cout << "\n";
    printAllFighters(alien_arr);
*/
    for (int i = 0; i < amount; ++i)
        delete[] alien_arr[i];
    delete[] alien_arr;

    for (int i = 0; i < amount; ++i)
        delete[] predator_arr[i];
    delete[] predator_arr;

    return 0;
}

