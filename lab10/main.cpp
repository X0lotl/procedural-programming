#include <iostream>
#include "Simpson.h"
#include "math.h"

double func(double x, double a, double b) {
  return (1 / (sqrt((pow(a, 2) * pow(sin(x), 2) + pow(b, 2) * pow(cos(x), 2)))));
}

double M (double a, double b) {
  double previousA = a;
  double previousB = b;

  for (int n = 1; a != b; n++) {
    a = std::sqrt(previousA*previousB);
    b = (previousA + previousB)/2;

    previousA = a;
    previousB = b;
  }

  return a;
}

int main() {
  std::cout << "Testing simpson method for integral min 0 and max PI/2, with func => 1 / (sqrt(a^2 * sin(x) ^ 2 + b^2 * cos(x)^2) WHERE: " << std::endl;
    for (double a = 2; a < 100; a += 5) {
      for (double b = a; b < 100; b *= 2.5) {
        double simsonOutput = simpson (0, M_PI_2, &func, 0.00000001, a, b) * (2 / M_PI);
        double M_output = 1 / M(a, b);
        std::cout << "a = " << a << " b = " << b << " : " << simsonOutput << " expected: " << M_output << " IS EQUALS: " << (floor(simsonOutput * 1000000) == floor(M_output * 1000000)) << std::endl;
      }
      std::cout << std::endl;
    }
  return 0;
}
