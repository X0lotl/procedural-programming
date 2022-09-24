//
// Created by x0lotl on 9/14/22.
//

double sum(int number, double x) {

	double sum = 0;

	for (int k = 0; k <= number; k++) {

		int multiplier = 1 - (2 * (k % 2));

		double x_pow_k = x;

		for (int i = 1; i < k; i++) {
			x_pow_k *= x;
		}

		long long k_fact = 1;

		for (int i = 2; i <= k; i++) {
			k_fact *= i;
		}

		sum += (double) (multiplier * x_pow_k) / (double) k_fact;
	}

	return sum;
}