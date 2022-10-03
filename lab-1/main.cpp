#include <iostream>
#include "functions.h"
#include "cmath"

int main() {

	const int n = 200;
	std::cout << "Test my pow function\n" << std::endl;
	for (double x = 0; x < 35; x += 0.1) {
		std::cout << "My pow for x: " << x << " and n: " << n << " = " << myPow(x, n) << " Expected: " << pow(x, n)
							<< std::endl;
	}
	std::cout << "MAX / MIN x = 34,8 / -34.8 for n = 200" << std::endl;

	for (double x = -1; x <= 1.6; x += 0.1) {
		std::cout << "My cos(x), for x: " << x << " = " << myCos(x) << " Expected: " << cos(x) << std::endl;
	}

	std::cout << "MAX/MIN x for cos(x) = 1.5 / -1";

	for (double x = -1; x <= 1.6; x += 0.1) {
		std::cout << "My tg(x), for x: " << x << " = " << myTg(x) << " Expected: " << tan(x) << std::endl;
	}

	std::cout << "MAX/MIN x for tg(x) = 1.5 / -1";

	return 0;
}