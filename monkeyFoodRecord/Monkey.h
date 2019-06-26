// Copyright 2018 Jacob Reola

#include <iostream>
#include <iomanip>
#include <string>
#include <cfloat>

const int MONKEY  = 3,
          EACHDAY = 7;

const std::string DAY[EACHDAY] = {"SUN ", "MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT "};

extern float EATING_RECORD[MONKEY][EACHDAY]; 

void recordDiet();
float averageEaten();
float minEaten();
float maxEaten();
void displayChart();
