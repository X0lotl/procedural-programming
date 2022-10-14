#include <iostream>
#include "cmath"
#include "gause.h"

int main() {
	for (int i = 1; i <= 10; i++) {
		std::cout << "Gause for x: " << i << " = " << myGause(i) << std::endl;
	}

	std::cout << "\nMy exp for x: 10.9 = " << myExp(10.9) << " Expected: " << exp(10.9) << std::endl;

	return 0;
}