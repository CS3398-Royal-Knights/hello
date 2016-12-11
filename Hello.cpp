#include "Hello.h"

//Returns true if the result of the subtraction
//is positive, false otherwise
bool Hello::subtractFailIfNeg(int a, int b) {
  int c = a - b;
  return c >= 0;
}

