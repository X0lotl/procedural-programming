//
// Created by x0lotl on 10/13/22.
//'
#include "cmath"

double myGause(int x) {
	double result = x;
	int pow = x;
	int factorial = 1;
	int powX = 1;
	int number = 1;
	double previousResult;
	int multiplayer;
	double difference = 1;

	for (int i = 1; difference >= 0.00000001; i++) {
		previousResult = result;

		if (i % 2 == 0)
			multiplayer = -1;
		else
			multiplayer = 1;

		pow *= (x * x);
		factorial *= i;
		number += 2;
		result += multiplayer * ((double)(powX)/(double)(number * factorial));
		difference = std::abs(result - previousResult);
	}

	return result;
}


double myExp(double x) {
	double e = exp(1);
	if(x >= 0) {
		int integerPart = (int) x;
		double fractionalPart = x - integerPart;

		return pow(e, fractionalPart) * pow(e, integerPart);
	} else {
		return 1/ pow(e, -x);
	}
}