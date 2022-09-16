//
// Created by x0lotl on 9/14/22.
//

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

double sin(double x, double E) {
	double sum = 0;
	int k = 0;

	while (true) {

		double a = calculateSum(k, x);

		double module_a = a;
		if (a < 0) {
			module_a = -a;
		}

		sum += a;

		if (module_a < E) {
			break;
		}


		k++;
	}

	return sum;
}