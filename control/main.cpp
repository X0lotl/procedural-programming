// Danylo Khomichenko

#include <iostream>
#include "Sum.h"
#include "Harmonic-geometric.h"
#include "ChangeBits.h"
#include "ChangeBits.h"


int main() {
  std::cout << "Testing 1 exercise: " << std::endl;
  for (unsigned short int n = 0; n < 20; n++) {
    std::cout << "For n = " << n << " Is (~n ? n : 65535) equals to (n)? " << ((~n ? n : 65535) == (n)) << std::endl;
  }

  std::cout << "\n\nTesting 2 exercise: " << std::endl;
  for (double x = 0.1; x < 2; x += 0.1) {
    for (int n = 1; n < 4; n++) {
      std::cout << "Result for x = " << x << " n = " << n << "   = " << sum(x, n) << " Expected: " << badSum(x, n)
                << std::endl;
    }
  }

  std::cout << "\n\nTesting 3 exercise: " << std::endl;
  for (double a = 1.1; a < 20; a += 0.7) {
    for (double b = a + 1; b < 30; b *= 1.9) {
      std::cout << "Harmonic Geometric for a = " << a << " b = " << b << "   = " << harmonicGeometric(a, b)
                << std::endl;
    }
  }

  std::cout << "\n\nTesting 4 exercise: " << std::endl;
  unsigned int dWordAfterChanging = changeBits(4234957295);
  std::cout << "My digital word = " << 4234957295 << " After changing = " << dWordAfterChanging << std::endl;
}
