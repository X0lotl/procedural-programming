//
// Created by x0lotl on 10/13/22.
//
#include "cmath"

double myGause(int x) {
	double result = x;
	int pow = x;
	int factorial = 1;
	int powX = 1;
	int number = 1;
	double previousResult;
	int multiplayer;

	for (int i = 1; std::abs(result - previousResult) >= 0.000000001; i++) {
		previousResult = result;

		if (i % 2 != 0)
			multiplayer = -1;
		else
			multiplayer = 1;

		pow *= (x * x);
		factorial *= i;
		number += 2;

		result += multiplayer * ((double) (powX) / (double) (number * factorial));
	}

	return result;
}

double myExp(double x) {
	const double e = 2.7182818284590451;

	if (x >= 0) {
		int integerPart = (int) x;
		double fractionalPart = x - integerPart;

		return pow(e, fractionalPart) * pow(e, integerPart);
	} else {
		return 1 / pow(e, -x);
	}
}