#include "unit_class.h"
#include "fighters_class.h"

void fighters_born(Unit**& alien_arr, 
                   Unit**& predator_arr, 
                   int amount);

void fighters_genocide(Unit** alien_arr, 
                       Unit** predator_arr, 
                       int amount);

bool team_alive(Unit** arr, int amount);

int choose_fighter(Unit** arr, int amount);

void printAllFighters(Unit** alien_arr, 
                      Unit** predator_arr, 
                      int amount);
