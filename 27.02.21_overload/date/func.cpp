#include <iostream>
#include "class_of_date.h"

Date::Date(int uDay, int uMonth, int uYear)
{
    _day = uDay;
    _month = uMonth;
    _year = uYear;
}

Date::Date(char* date)
{
    _day = 10 * int(date[0] - '0') + int(date[1]) - '0';
    _month = 10 * int(date[3] - '0') + int(date[4]) - '0';
    _year = 1000 * int(date[6] - '0') + 100 * (int(date[7]) - '0') +
            10 * int(date[8] - '0') + int(date[9]) - '0';
}

int Date::days_from_Jesus(int day, int month, int year) const
{
    int amount_of_days = 0;
    for (int i = 1; i < year; ++i)
        if (i % 400 == 0 || (i % 100 != 0 && i % 4 == 0))
            amount_of_days += 366;
        else
            amount_of_days += 365;
    for (int i = 1; i <  month; ++i)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 ||
                      i == 8 || i == 10 || i ==12)
            amount_of_days += 31;
        if (i == 4 || i == 6 || i == 9 || i == 11)
            amount_of_days += 30;
        if (i == 2 && (year % 400 == 0 ||
            (year % 100 != 0 && year % 4 == 0)))
            amount_of_days += 29;
        if (i == 2 && !(year % 400 == 0 ||
            (year % 100 != 0 && year % 4 == 0)))
            amount_of_days += 28;
    }
    return amount_of_days + day;
}
