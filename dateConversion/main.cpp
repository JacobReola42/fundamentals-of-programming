// Copyright 2018 Jacob Reola

#include "Date.h"

int main() {

    int haha, 
        very,
        fun;

// date object using Date class to access class methods
    Date date;

// This bool utilizes set func. to notify user of incorrect date input 
    bool set = false;

// loops the user until the correct input is true/set 
    while(!set) {
        std::cout << "Please enter a integer of month, day, year: \n";
        std::cin >> haha >> very >> fun;
        set = date.set(haha,very,fun); // lots of bool here
    }
    date.printNumeric();
    date.printAmerican();
    date.printEuropean();
    return 0;
}
