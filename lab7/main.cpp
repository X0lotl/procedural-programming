#include <iostream>
#include "quickFib.h"

int main() {
  static int fibNumber = 10;

  for (int i = 1; i <= 40; i++) {
    std::cout << i << " : " << quickFib(i) << std::endl;
  }

  std::cout << "Fibonacci of number: " << fibNumber << " = " << quickFib(fibNumber) << std::endl;

  return 0;
}
