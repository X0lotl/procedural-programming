//
// Created by x0lotl on 03.12.22.
//
#include <iostream>
#include <functional>


double simpson(double a, double b, int n, const std::function<double (double)> &function) {
  const double step = (b - a) / n;

  double result = 0;
  for(int i = 0; i < n; i++) {
    const double x1 = a + i * step;
    const double x2 = a + (i + 1) * step;

    result += (x2 - x1) / 6.0 * (function(x1) + 4.0 * function(0.5 * (x1 + x2)) + function(x2));
  }

  return result;
}