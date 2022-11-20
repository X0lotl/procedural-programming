//
// Created by x0lotl on 20.11.22.
//

void fib(double &f1, double &f2, unsigned int n, int &counter) {
  if (n >= 2) {
    double f = f2;
    f2 += f1;
    f1 = f;
    fib(f1, f2, n - 1, ++counter);
  }
};

double Fibonaci(unsigned int n, int &counter) {
  double f0 = 0, f1 = 1;
  switch (n) {
    case 0:
      return f0;
      break;
    case 1:
      return f1;
      break;
    default:
      fib(f0, f1, n, ++counter);
      return f1;
  }
};