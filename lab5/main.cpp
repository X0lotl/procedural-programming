#include <iostream>
#include "Gorner.h"

int main() {
  double myArray[100];

  fillArray(myArray, 100);


  for (int i = 0; i < 100; i++) {
    std::cout << myArray[i] << std::endl;
    }
  return 0;
}
