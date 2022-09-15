//
// Created by x0lotl on 9/15/22.
//

int division(int m, int n) {
    int counter = 0;

    while (m >= n) {
        m -= n;
        counter++;
    }

    return counter;
}