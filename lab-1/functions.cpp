//
// Created by x0lotl on 9/30/22.
//
// x^n
double myPow(double x, int n) {
	double result = 1;

	if (n < 0) {
		for (int i = 0; i > n; i--) {
			result /= x;
		}
	} else {
		for (int i = 0; i < n; i++) {
			result *= x;
		}
	}

	return result;
}

// x!
double myFactorial(double x) {
	return x <= 1 ? 1 : (x * myFactorial(x - 1));
}

//cos(x)
double myCos(double x) {
	double sum = 0;

	for (int k = 0; k < 10000; k++) {
		int multiplier = 1 - (2 * (k % 2));

		sum += multiplier * ((myPow(x, 2 * k + 1)) / myFactorial(2 * k));
	}

	return sum;
}

double calculateSum(int k, double x) {
	int multiplier = 1 - (2 * (k % 2));

	double x_pow_2k_p_1 = 1;

	for (int i = 0; i < 2 * k + 1; i++) {
		x_pow_2k_p_1 *= x;
	}

	long long fact_2k_p_1 = 1;

	for (int i = 2; i <= 2 * k + 1; i++) {
		fact_2k_p_1 *= i;
	}

	return (double) (multiplier * x_pow_2k_p_1) / (double) fact_2k_p_1;
}

double module_a(double a) {
	return a >= 0 ? a : -a;
}


//sin (x, E) from Lab 0
double sin(double x, double E) {
	double sum = 0;

	double a = calculateSum(0, x);

	for (int k = 0; module_a(a) >= E; k++) {
		a = calculateSum(k, x);
		sum += a;
	}

	return sum;
}

//tg(x)
double myTg(double x) {
	return myCos(x) / sin(x, 0.0001);
}