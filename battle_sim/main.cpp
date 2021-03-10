#include <iostream>
#include <ctime>
#include "unit_class.h"
#include "fighters_class.h"
#include "header.h"

const int amount = 3;

int main()
{
    Unit** alien_arr;
    Unit** predator_arr;
    
    char next[100];
    
    int alien_attack, predator_attack;
    srand(time(0));
    fighters_born(alien_arr, predator_arr, amount);
   
    printAllFighters(alien_arr, predator_arr, amount); 
    
    while(team_alive(alien_arr, amount) &&
          team_alive(predator_arr, amount)) 
    {
        alien_attack = choose_fighter(alien_arr, amount);
        predator_attack = choose_fighter(predator_arr, amount); 
        if(rand() % 2){
            alien_arr[alien_attack] -> hit(*predator_arr[predator_attack]);
            std::cout << alien_attack << " alien is goint to attack ";
            std::cout << predator_attack << " predator!\n\n";
            alien_arr[alien_attack] -> roar();
            std::cout << ": alien says!\n\n\n"; 
        }
        else{
            predator_arr[predator_attack] -> hit(*alien_arr[alien_attack]); 
            std::cout << predator_attack << " predator is goint to attack ";
            std::cout << alien_attack << " alien!\n\n"; 
            predator_arr[predator_attack] -> roar();
            std::cout << ": predator says!\n\n\n";
        }
        std::cout << "Input anything to continue...";
        std::cin >> next;
        printAllFighters(alien_arr, predator_arr, amount); 
    }

    if(team_alive(alien_arr, amount))
        std::cout << "Alien team wins!\n";
    else
        std::cout << "Predator team wins!\n";    

    fighters_genocide(alien_arr, predator_arr, amount);

    return 0;
}

