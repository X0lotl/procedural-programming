//
// Created by x0lotl on 9/22/22.
//
#include "cmath"

int fact(int n) {
	return std::tgamma(n + 1);
}

double myExp(double x, int n) {
	double output = 0;

	for(int i = 0; i <= n; i++) {
			output += pow(x, i)/ fact(i);
	}

	return output;
}