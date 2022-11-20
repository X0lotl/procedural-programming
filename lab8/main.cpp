#include <iostream>
#include "quickFibMatrixRecursive.h"
#include "pow.h"
#include "fibonacci.h"

int main() {
  int counter = 0;

  std::cout << "Test pow function: " << std::endl;
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      counter = 0;
      std::cout << i << "^" << j << " = " << power(i, j, ++counter) << " with number of operations: " << counter << std::endl;
    }
  }

  std::cout << "\nTest fibonacci: " << std::endl;
  for (int i = 1; i < 20; i++) {
    counter = 0;
    std::cout << i << " Fib number = " << Fibonaci(i, counter) << " with number of operations: " << counter << std::endl;
  }


  std::cout << "\nTest FibNumberMatrix: " << std::endl;
  for (int i = 1; i < 20; i++) {
    counter = 0;
    std::cout << i << " Fib number = " << quickFibNumber(i, counter) << " with number of operations: " << counter
              << std::endl;
  }

}
