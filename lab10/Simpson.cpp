//
// Created by x0lotl on 03.12.22.
//
#include <iostream>
#include <math.h>


double simpson(double a, double b, double(*function)(double, double, double), double eps, double aForFunc, double bForFunc) {
  double I = eps + 1;
  double I1 = 0;

  for (int k = 2; (k <= 4) || (fabs(I1 - I) > eps); k *= 2) {
    double h, sum2 = 0, sum4 = 0, sum = 0;
    h = (b - a) / (2 * k);
    for (int i = 1; i <= 2 * k - 1; i += 2) {
      sum4 += function(a + h * i, aForFunc, bForFunc);
      sum2 += function(a + h * (i + 1), aForFunc, bForFunc);
    }
    sum = function(a, aForFunc, bForFunc) + 4 * sum4 + 2 * sum2 - function(b, aForFunc, bForFunc);
    I = I1;
    I1 = (h / 3) * sum;
  }

  return I1;
}