#include <cassert>
#include <cstdlib>

void fillArray(double *coeff, size_t size) {
  for (int i = 0; i < size; i++) {
    coeff[i] = (double)(rand() % 100 - 50) + (double)(rand() % 100)/100;
  }

  return;
}

  double sum(double *qaqa, size_t size, int sign) {
  return 0;
}

double Horner(double *coeff, size_t size, double x) {
  double result = 0;
  assert(((x == 1) || (x == -1)) ? (result == sum(coeff,
                                                  size, x)) : true);
  return result;
}