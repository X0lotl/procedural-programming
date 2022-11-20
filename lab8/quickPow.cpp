//
// Created by x0lotl on 18.11.22.
//

void zet(double &y, double &x, unsigned int &k, int &counter) {
  if (k > 0) {
    if (k % 2 == 1) {
      y *= x;
      k--;
    } else {
      x *= x;
      k /= 2;
    };
    zet(y, x, k, counter);
  }
}

double power(double x, unsigned int n) {
  double y = 1;
  int counter = 0;
  zet(y, x, n, counter);
  return y;
}
