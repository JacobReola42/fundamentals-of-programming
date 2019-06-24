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

   int coding = sum(a,b);
   int is = product(a,b);
   int super = quotient(a,b);
   int fun = remainder(a,b);

   std::cout << "Sum is: " << coding << "\n";
   std::cout << "Product is: " << is << "\n";
   std::cout << "Quotient is: " << super << "\n";
   std::cout << "Remainder is: " << fun << "\n";

    float f = a;
    float g = b;

    float hA = pointQuotient(f,g);
    float hAA = average(f,g);

    std::cout << "Floating-point quotient is: " << hA << "\n";
    std::cout << "Average is: " << hAA << "\n";

return 0;
}
