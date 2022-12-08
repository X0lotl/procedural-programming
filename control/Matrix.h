#include "ostream"

template <typename T>
struct Matrix
{
    T _11;
    T _12;
    T _21;
    T _22;
};

template <typename T>
std::ostream &operator<<(std::ostream &os, const Matrix<T> &m)
{
    return os << "{ " << m._11 << ", " << m._12 << ", " << m._21 << ", " << m._22 << " }";
}

template <typename T>
Matrix<T> operator*(const Matrix<T> &m, const T &n)
{
    return {
        m._11 * n,
        m._12 * n,
        m._21 * n,
        m._22 * n};
}

template <typename T>
Matrix<T> operator*(const Matrix<T> &m1,const Matrix<T> &m2)
{
    return {
        (m1._11 * m2._11 + m1._12 * m2._21),
        (m1._11 * m2._12 + m1._12 * m2._22),
        (m1._21 * m2._11 + m1._22 * m2._21),
        (m1._21 * m2._12 + m1._22 * m2._22)};
}

template <typename T>
Matrix<T> operator+(const Matrix<T> &m1,const Matrix<T> &m2)
{
    return {
        m1._11 + m2._11,
        m1._12 + m2._12,
        m1._21 + m2._21,
        m1._22 + m2._22};
}
