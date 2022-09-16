//
// Created by x0lotl on 9/15/22.
//

int greatest_common_denominator_loop(int m, int n) {
    while (m != n) {
        if (m > n)
            m -= n;
        else
            n -= m;
    }
    return m;
}

int greatest_common_denominator_recursive(int m, int n) {
    if (m == n) return m;
    return m > n ? greatest_common_denominator_recursive(m-n, n) : greatest_common_denominator_recursive(m , n - m);
}