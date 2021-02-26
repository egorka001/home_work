#ifndef DATE_H
#define DATE_H
#include <iostream>

class Date
{
private:
    int _day;
    int _month;
    int _year;

    int days_from_Jesus(int day, int month, int year) const;

public:
    Date()
    {
        _day = 1;
        _month = 1;
        _year = 1970;
    }

    Date(char* date);

    Date(int uDay, int uMonth, int uYear);

    int getDay() const { return _day; }
    int getMonth() const { return _month; }
    int getYear() const { return _year; }

    void setDay(int uDay) { _day = uDay; }
    void setMonth(int uMonth) { _month = uMonth; }
    void setYear(int uYear) { _year = uYear; }

    int operator- (Date const& secondDate) const
    {
        int first = days_from_Jesus(_day, _month, _year);
        int second = days_from_Jesus(secondDate._day,
                                     secondDate._month,
                                     secondDate._year);
        return abs(first - second);
    }
};

inline std::ostream& operator<< (std::ostream& out, Date const& date)
{
    
    if (date.getDay() < 10)
        out << '0';
    out << date.getDay() << '.';
    if (date.getMonth() < 10)
        out << '0';
    out << date.getMonth() << '.';
    out << date.getYear() << '\n';
    
    return out;
}

inline std::istream& operator>> (std::istream& in, Date& date)
{
    char str[10];
    std::cout << "Input format: dd.mm.yyyy\n";
    in >> str;
    date.setDay(10 * int(str[0] - '0') + int(str[1]) - '0');
    date.setMonth(10 * int(str[3] - '0') + int(str[4]) - '0');
    date.setYear(1000 * int(str[6] - '0') + 100 * (int(str[7]) - '0') +
                 10 * int(str[8] - '0') + int(str[9]) - '0');
    return in;
}

#endif
