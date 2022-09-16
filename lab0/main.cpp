#include <iostream>
#include "sum.h"
#include "sin.h"
#include "division_with_a_remainder.h"
#include "greatest_common_denominator.h"
#include "chebyshev_polynomial.h"

int main() {

	std::cout << "Sum for n = 20; x = 5 is: " << sum(20, 5) << std::endl;

	std::cout << "Sin for x = 0.5; E = 0.0001 is: " << sin(0.5, 0.0001) << std::endl;

	std::cout << "Division m/n , where m = 100, n = 8 is: " << division(100, 8) << " Referent: " << 100 / 8 << std::endl;

	std::cout << "Greatest common denominator of 100 and 25, using loop: " << greatest_common_denominator_loop(100, 25)
						<< " Using recursive: " << greatest_common_denominator_recursive(100, 25) << std::endl;

	std::cout << "Chebyshev Polynomial for n = 10 and x = 2" << chebyshev_polynomial(3, 2) << std::endl;

	return 0;
}