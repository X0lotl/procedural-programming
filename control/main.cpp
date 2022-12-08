// Danylo Khomichenko

#include <iostream>
#include <complex>
#include "Sum.h"
#include "Harmonic-geometric.h"
#include "ChangeBits.h"
#include "ChangeBits.h"
#include "Concotination.h"
#include "Matrix.h"
#include "Complex.h"
#include "Operation.h"
#include "cmath"

int main()
{
  std::cout << "Testing 1 exercise: " << std::endl;
  for (unsigned short int n = 0; n < 20; n++)
  {
    std::cout << "For n = " << n << " Is (~n ? n : 65535) equals to (n)? " << ((~n ? n : 65535) == (n)) << std::endl;
  }

  std::cout << "\n\nTesting 2 exercise: " << std::endl;
  for (double x = 0.1; x < 2; x += 0.1)
  {
    for (int n = 1; n < 4; n++)
    {
      std::cout << "Result for x = " << x << " n = " << n << "   = " << sum(x, n) << " Expected: " << badSum(x, n)
                << std::endl;
    }
  }

  std::cout << "\n\nTesting 3 exercise: " << std::endl;
  for (double a = 1.1; a < 20; a += 0.7)
  {
    for (double b = a + 1; b < 30; b *= 1.9)
    {
      std::cout << "Harmonic Geometric for a = " << a << " b = " << b << "   = " << harmonicGeometric(a, b)
                << std::endl;
    }
  }

  std::cout << "\n\nTesting 4 exercise: " << std::endl;
  unsigned int dWordAfterChanging = changeBits(4234957295);
  std::cout << "My digital word = " << std::hex << 4234957295 << " After changing = " << dWordAfterChanging << std::dec << std::endl;

  std::cout << "\n\nTesting 5 exercise: " << std::endl;
  char a[5] = {'h', 'e', 'l', 'l', 'o'};
  char b[6] = {' ', 'w', 'o', 'r', 'l', 'd'};

  char *output = concotinateCharArrays(a, 5, b, 6);

  for (int i = 0; i < 11; i++)
  {
    std::cout << output[i];
  }

  std::cout << "\n\nTesting 6 exercise: " << std::endl;

  Matrix<int> Matrix1 = {2, 3, 1, 4};
  Matrix<int> Matrix2 = {10, 8, 1, 4};
  std::cout << Matrix1 << std::endl;
  std::cout << Matrix1 * 20 << std::endl;
  std::cout << Matrix1 + Matrix2 << std::endl;
  std::cout << Matrix1 * Matrix2 << std::endl;

  std::cout << std::endl;

  Matrix<double> Matrix1Double = {2, 3, 1, 4.5};
  Matrix<double> Matrix2Double = {10.2, 8.2, 1, 4};
  std::cout << Matrix1Double << std::endl;
  std::cout << Matrix1Double * 20.2 << std::endl;
  std::cout << Matrix1Double + Matrix2Double << std::endl;
  std::cout << Matrix1Double * Matrix2Double << std::endl;

  std::cout << std::endl;

  Matrix<Complex> Matrix1MyComplex = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
  Matrix<Complex> Matrix2MyComplex = {{9, 10}, {11.5, 12}, {6, 6}, {1.23, 2}};
  std::cout << Matrix1MyComplex << std::endl;
  Complex x = {9, 10};
  std::cout << Matrix1MyComplex * x << std::endl;
  std::cout << Matrix1MyComplex + Matrix2MyComplex << std::endl;
  std::cout << Matrix1MyComplex * Matrix2MyComplex << std::endl;

  std::cout << std::endl;

  Matrix<std::complex<double>> Matrix1Complex = {(1, 2), (3, 4), (5, 6), (7, 8)};
  Matrix<std::complex<double>> Matrix2Complex = {(9, 10), (11.5, 12), (6, 6), (1.23, 2)};
  std::cout << Matrix1Complex << std::endl;
  std::cout << Matrix1Complex * (std::complex<double>)(9, 10) << std::endl;
  std::cout << Matrix1Complex + Matrix2Complex << std::endl;
  std::cout << Matrix1Complex * Matrix2Complex << std::endl;

  std::cout << "\n\nTesting 7 exercise: " << std::endl;
  std::cout << operration(Matrix1, Matrix2, &myFunc) << std::endl;
  std::cout << operration(Matrix1Double, Matrix2Double, &myFunc) << std::endl;
  std::cout << operration(Matrix1MyComplex, Matrix2MyComplex, &myFunc) << std::endl;
  std::cout << operration(Matrix1Complex, Matrix2Complex, &myFunc) << std::endl;

  std::cout << "\n\nTesting 8 exercise: " << std::endl;
}
