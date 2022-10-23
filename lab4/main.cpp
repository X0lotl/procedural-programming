#include <iostream>
#include "realization.h"

int main() {
	const double a = 10.6;
	const double b = 20.9;
	if (a <  b) {
		std::cout << "Arithmetic-geometric mean for a = " << a << " b = " << b << " : " << M(a,b) << std::endl;
	} else {
		std::cout << "Error A can`t be > B" << std::endl;
	}

	return 0;
}
