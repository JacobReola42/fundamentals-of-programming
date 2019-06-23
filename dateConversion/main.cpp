// Copyright 2018 Jacob Reola

#include "Date.h"

int main(){

// declaring variables
    int day,
        month,
        year;

// Create date object using Date class 
    Date date;

// This bool utilizes set func. to notify user of incorrect date input 
    bool set = false;

// loops the user until the correct input is utililzed
    while(!set){
        std::cout << "Please enter a integer of month, day, year: " << std::endl;
        std::cin  >> month >> day >> year;
        set = date.set(month,day,year);
    }
    date.printNumeric();
    date.printAmerican();
    date.printEuropean();


    return 0;
}
