// Danylo Khomichenko

#include "cmath"

double harmonicGeometric(double a, double b){
  double tempA;
  double tempB;
  while (a != b && b - a > 0.00000000001){
    tempA = 2/((1/a) + 1/b);
    tempB = sqrt(a*b);
    a = tempA;
    b = tempB;
  }
  return a;
}