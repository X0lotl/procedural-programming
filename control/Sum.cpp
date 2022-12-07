// Danylo Khomichenko

double badSum(double x, double n) {
  double result = 1;
  double tempX = x;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < i * i * i; j++) {
      tempX *= x;
    }
    result += tempX;
    tempX = x;
  }


  return result;
}

double sum(double x, double n) {
  double sum = 1;
  double tempSum = 1;
  for (int i = 1; i <= n; i++) {
    double power = 3 * i * i - 3 * i + 1;
    double tempX = 1;
    for (double j = 0; j < power; j++) {
      tempX *= x;
    }

    tempSum *= tempX;
    sum += tempSum;
  }

  return sum;
}