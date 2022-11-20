//
// Created by x0lotl on 20.11.22.
//

void zet(double &y, double &x, unsigned int &k, int &counter) {
  if (k > 0) {
    if (k % 2 == 1) {
      y *= x;
      k--;
    } else {
      x *= x;
      k /= 2;
    }
    zet(y, x, k, ++counter);
  }
}

double power(double x, unsigned int n, int &counter) {
  double y = 1;
  zet(y, x, n, ++counter);
  return y;
}