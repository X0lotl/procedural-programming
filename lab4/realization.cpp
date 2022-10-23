//
// Created by x0lotl on 10/23/22.
//
#include "cmath"

double M (double a, double b) {
	double limA = a;
	double limB = b;

	double previousA = a;
	double previousB = b;


	for (int n = 1; limA != limB; n++) {
			a = std::sqrt(previousA*previousB);
			b = (previousA + previousB)/2;
			limA += a;
			limB += b;
	}

	return limA;
}