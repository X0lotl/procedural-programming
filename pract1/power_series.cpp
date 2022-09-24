//
// Created by x0lotl on 9/22/22.
//
#include "cmath"

long long fact(int n) {
	return std::tgamma(n + 1);
}

long double myExp(double x, int n) {
	long double output = 1;
	double pow = x;

	for(int i = 1; i <= n; i++) {
			output += (double)  pow/ fact(i);
			pow *= x;
	}

	return output;
}