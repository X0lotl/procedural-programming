//
// Created by x0lotl on 9/15/22.
//

int chebyshev_polynomial(int n, int x) {
	int result_n_m_2 = 1;
	int result_n_m_1 = x;

	int result;

	for (int i = 2; i <= n; i++) {
		result = 2 * x * result_n_m_1 - result_n_m_2;
		result_n_m_2 = result_n_m_1;
		result_n_m_1 = result;
	}

	return result;
}