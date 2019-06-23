// Copyright 2018 Jacob Reola

#include <iostream>
#include <iomanip>
#include <string>

// Declares class

class Date
{
private:
    int _day,
        _month,
        _year;           // Member variables

    std::string getMonthName();            // Private member prototype function

public:          // Prototype member functions
    Date();
    bool set (int, int, int);
    void printNumeric();
    void printAmerican();
    void printEuropean();
};          // semicolon for class only

