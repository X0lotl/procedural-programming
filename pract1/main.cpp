#include <iostream>
#include "power_series.h"
#include "cmath"

int main() {
	const int n = 100;

	std::cout.precision(27);

	for (double x = 0; x <= 20; x += 0.5) {
		std::cout << "x = " << x << "; n = " << n << "; myExp = " << myExp(x, n) << std::endl;
		std::cout << "cmath exp = " << exp(x) << std::endl;
	}

 	return 0;
}
