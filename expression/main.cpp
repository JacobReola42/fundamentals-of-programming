// Copyright 2018 Jacob Reola

#include "expressions.h"

int main() {

   int a = 0;
   int b = 0;

   std::cout << "Enter first integer: ";
   std::cin >> a;
   std::cout << "Enter second integer: ";
   std::cin >> b;
   std::cout << "\n";

   std::cout << "Sum is: " << sum (a, b) << "\n";
   std::cout << "Product is: " << product (a,b) << "\n";
   std::cout << "Quotient is: " << quotient (a,b) << "\n";
   std::cout << "Remainder is: " << remainder (a,b) << "\n";

   float f = a;
   float g = b;

   std::cout << "Floating-point quotient is: " << pointQuotient (f,g) << "\n";
   std::cout << "Average is: " << average(f,g) << "\n";


return 0;
}
