//
// Created by x0lotl on 9/15/22.
//

int chebyshev_polynomial(int n, int x) {
	int result_n_m_2 = x;
	int result_n_m_1 = 1;

	int result = result_n_m_2 + result_n_m_1;

	for (int i = 2; i <= n; i++) {
		result = 2 * x * result_n_m_1 - result_n_m_2;
		result_n_m_2 = result_n_m_1;
		result_n_m_1 = result;
	}

	return result;
}