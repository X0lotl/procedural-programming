#include <iostream>
#include "quickFib.h"

int main() {
  static int fibNumber = 10;

  std::cout << "Fibonacci of number: " << fibNumber << " = " << quickFib(fibNumber) << std::endl;

  return 0;
}
