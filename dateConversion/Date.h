// Copyright 2018 Jacob Reola

#include <iostream>
#include <iomanip>
#include <string>

class Date {
   private:
      // Member Var.
      int _day,
          _month,
          _year;
      std::string _getMonthName();

   public: 
      Date();
      bool set (int, int, int);
      void printNumeric();
      void printAmerican();
      void printEuropean();
}; // semicolon for class only

