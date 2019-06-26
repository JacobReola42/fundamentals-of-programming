// Copyright 2018 Jacob Reola

#include "Monkey.h"

float EATING_RECORD[MONKEY][EACHDAY] = {0};

void recordDiet() {
   for (int row = 0; row < MONKEY; ++row) {
      std::cout << "\n";
      for (int col = 0; col < EACHDAY; ++col) {
         std::cout << "Enter pounds of food eaten by monkey "
                   << (row + 1) 
                   << " on "
                   << DAY[col]
                   << ": ";

         std::cin >> EATING_RECORD[row][col];

         while (EATING_RECORD[row][col] <= 0) {
         std::cout << "\nEnter pounds of food eaten by monkey "
                   << (row + 1) 
                   << " on "
                   << DAY[col]
                   << ": ";
         std::cin >> EATING_RECORD[row][col];
         } 
      } 
   } 
}

float averageEaten() {
   float average = 0;

   for (int row = 0; row < MONKEY; ++row) {
      for (int col = 0; col < EACHDAY; ++col) {
         average += EATING_RECORD[row][col];
      } 
   } 
   average /= (MONKEY * EACHDAY);
   std::cout << "The average food eaten per day by all monkeys "
             << std::setw(6)
             << ": "
             << std::setw(3)
             << std::fixed
             << std::setprecision(1)
             << average
             << " pounds \n";

   return average;
} 

float minEaten() {
   float min = FLT_MAX;

   for (int row = 0; row < MONKEY; ++row) {
      for (int col = 0; col < EACHDAY; ++col) {
         if (min > EATING_RECORD[row][col]) {
            min = EATING_RECORD[row][col];
         } 
      } 
   } 
   std::cout << "The least amount of food eaten by any monkey "
             << std::setw(7)
             << ": "
             << std::setw(3)
             << min
             << " pounds \n";

   return min;
} 

float maxEaten() {
   float max = -1; 

   for (int row = 0; row < MONKEY; ++row) {
      for (int col = 0; col < EACHDAY; ++col) {
         if (max < EATING_RECORD[row][col]) {
            max = EATING_RECORD[row][col];
         } 
      } 
   } 
   std::cout << "The largest amount of food eaten by any monkey " 
             << std::setw(5)
             << ": "
             << std::setw(3)
             << max
             << " pounds \n";

   return max;
} 

void displayChart() {
   std::cout << "Pounds of Food Eaten by Monkey and Day of the Week \n";
   std::cout << "Monkey ";
   for (int col = 0; col < EACHDAY; ++col) {
      std::cout << std::setw(6)
                << DAY[col];
   } 
   std::cout << "\n";

   for (int row = 0; row < MONKEY; ++row) {
      std::cout << std::setw(6)
                << row + 1;

      for (int col = 0; col < EACHDAY; ++col) {
         std::cout << std::setw(6)
                   << EATING_RECORD[row][col];
      } 
      std::cout << "\n";
   } 
   std::cout << "\n";
}
