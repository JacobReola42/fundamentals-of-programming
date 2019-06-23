// Copyright 2018 Jacob Reola

#include <iostream>
#include <iomanip>
#include <string>
#include <cfloat>
using namespace std;

// declaring and initializing variables and functions

const int MONKEY = 3,
        EACHDAY = 7;

const string day[7] = {"Sun ", "Mon ", "Tue ", "Wed ", "Thu ", "Fri ", "Sat "};

void recordDiet(float (&eatingRecord)[MONKEY][EACHDAY]);
float averageEaten(float eatingRecord[MONKEY][EACHDAY]);
float minEaten(float eatingRecord[MONKEY][EACHDAY]);
float maxEaten (float eatingRecord[MONKEY][EACHDAY]);
void displayChart (float eatingRecord [MONKEY][EACHDAY]);
