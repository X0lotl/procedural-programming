#include <iostream>
#include "cmath"
#include "gause.h"

int main() {
	for (int i = 1; i <= 10; i++) {
		std::cout << "Gause for x: " << i << " = " << myGause(i) << std::endl;
	}

	std::cout << "My exp for x: 10 = " << myExp(10.5) << " Expected: " << exp(10.5) << std::endl;
	return 0;
}


