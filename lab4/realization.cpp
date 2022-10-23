//
// Created by x0lotl on 10/23/22.
//
#include "cmath"

double M (double a, double b) {
	double previousA = a;
	double previousB = b;

	for (int n = 1; a != b; n++) {
			a = std::sqrt(previousA*previousB);
			b = (previousA + previousB)/2;

			previousA = a;
			previousB = b;
	}

	return a;
}