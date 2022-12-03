#include <iostream>
#include "Simpson.h"

double func(double x) {
  return (x / (x - 1));
}

int main() {
  std::cout << "Testing simpson method for integral min a and max b, with func => x / (x - 1)" << std::endl;
  for (double a = 0; a < 100; a += 3.5) {
    for (double b = a + 1; b < a * 10; b *= 1.5 ) {
      std::cout << "a = " << a << " b = " << b << " Result: " <<  simpson(a, b, 1000, &func) << std::endl;
    }

    std::cout << std::endl;
  }

  return 0;
}
