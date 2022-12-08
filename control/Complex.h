#include "ostream"

struct Complex
{
  double _re;
  double _im;
};
Complex operator+(const Complex &z1, const Complex &z2)
{
  return {z1._re + z2._re, z1._im + z2._im};
}
Complex operator-(const Complex &z1, const Complex &z2)
{
  return {z1._re - z2._re, z1._im - z2._im};
}

Complex operator*(const Complex &z1, const Complex &z2)
{
  return {z1._re * z2._re - z1._im * z2._im, z1._re * z2._im + z1._im * z2._re};
}

std::ostream &operator<<(std::ostream &os, const Complex &z)
{
  return os << z._re << '+' << z._im << 'i';
}