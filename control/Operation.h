#include <functional>
template <typename T>
T myFunc(T a, T b)
{
    return a * a +  a * b + b * b;
}

template <typename T>
T operration(const T &a, const T &b, T (*func)(T, T))
{
    return func(a, b);
}

