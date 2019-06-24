// Copyright 2018 Jacob Reola

#include "expressions.h"

int sum (int &a, int &b) {
   return (a+b);
}

int product (int &a, int &b) {
   return (a*b);
}

int quotient (int &a, int &b) {
   return(a/b);
}

int remainder (int &a, int &b) {
   return (a%b);
}

float pointQuotient(float &f, float &g) {
   return (f/g);
}

float average (float &f, float &g) {
   return ((f+g)/2);
}
