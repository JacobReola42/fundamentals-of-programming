// Copyright 2018 Jacob Reola

#include "functions.h"


int main()
{
// declaring local function

   float eatingRecord[MONKEY][EACHDAY];

// calling functions
   recordDiet(eatingRecord);
   displayChart(eatingRecord);
   averageEaten(eatingRecord);
   minEaten(eatingRecord);
   maxEaten(eatingRecord);
   
return 0;   
}
