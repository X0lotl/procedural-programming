#include <iostream>
#include "sum.h"
#include "sin.h"
#include "division_with_a_remainder.h"
#include "greatest_common_denominator.h"
#include "chebyshev_polynomial.h"
#include "cmath"

int main() {
	std::cout << "Test sum:" << std::endl;
	const int n = 20;

	for (double x = 0; x < 30; x += 0.5) {
		std::cout << "Sum for n =" << n << " x = " << x << " is: " << sum(n, x) << std::endl;
	}


	std::cout << "\n Test sin:" << std::endl;
	const double E = 0.0001;

	for (double x = -1; x < 1; x+=0.05) {
		std::cout << "Sin for x = " << x << "; E = " << E << " is: " << sin(x, E ) << std::endl;
	}


	std::cout << "Division m/n , where m = 100, n = 8 is: " << division(100, 8)
						<< " Referent: " << 100 / 8 << std::endl;

	std::cout << "Greatest common denominator of 100 and 25, using loop: " << greatest_common_denominator_loop(100, 25)
						<< " Using recursive: " << greatest_common_denominator_recursive(100, 25) << std::endl;

	std::cout << "Chebyshev Polynomial for n = 10 and x = 2 is: " << chebyshev_polynomial(10, 2) << std::endl;

	return 0;
}