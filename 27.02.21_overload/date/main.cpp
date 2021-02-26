#include <iostream>
#include "class_of_date.h"

int main()
{
    char day_today[] = "26.02.2021";
    char day_yesterday[] = "25.02.2021";
    Date today(day_today);
    Date yesterday(day_yesterday);
    std::cout << today;
    std::cout << yesterday;
    std::cout << "There are ";
    std::cout << today - yesterday;
    std::cout <<  " days beetween this two dates\n";
    Date tmp_date;
    std::cin >> tmp_date;
    std::cout << tmp_date;
    return 0;
}

