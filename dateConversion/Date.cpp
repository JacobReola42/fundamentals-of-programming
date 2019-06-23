// Jacob Reola

#include "Date.h"

/* Date constructor with no parameter */

Date::Date()
{   _day = 1;
    _month = 1;
    _year = 2001;
}

/* Validates the parameters of the month, day and year */

bool Date::set(int theMonth, int theDay, int theYear)
{
    if (theMonth < 1 || theMonth > 12){
        std::cout << "Error! The month should be between 1 and 12. \n";
        return false;
    }
    if (theDay <  1 || theDay > 31){
        std::cout << "Error! The day should be between 1 and 31. \n"; 
        return false;
    }
    if (theYear < 1950 || theYear > 2020){
        std::cout << "Error! The year should be between 1950 and 2020. \n";
        return false;
    }

// sets class member variables to the given values

    _day = theDay;
    _month = theMonth;
    _year = theYear;

    return true;
}

/* assigns month names to month variables */

std::string Date::getMonthName()
{
    std::string monthName;

    if (_month == 1)
    {monthName = "January";}

    if (_month == 2)
    {monthName = "February";}

    if (_month == 3)
    {monthName = "March";}

    if (_month == 4)
    {monthName = "April";}

    if (_month == 5)
    {monthName = "May";}

    if (_month == 6)
    {monthName = "June";}

    if (_month == 7)
    {monthName = "July";}

    if (_month == 8)
    {monthName = "August";}

    if (_month == 9)
    {monthName = "September";}

    if (_month == 10)
    {monthName = "October";}

    if (_month == 11)
    {monthName = "November";}

    if (_month == 12)
    {monthName = "December";}

    return monthName;
}

/* prints numeric date format */

void Date::printNumeric()
{
    std::cout << _day << "/" << _month << "/" << _year << std::endl;
}

/* prints American date format */

void Date::printAmerican()
{
    std::cout << getMonthName() << " "  << _day << ", " << _year << std::endl;
}

/* prints European date format */

void Date::printEuropean()
{
    std::cout << _day << " " << getMonthName() << " "  << _year << std::endl;
}

