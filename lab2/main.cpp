#include <iostream>
#include "mypows.h"
#include "powOutput.h"

int main() {
	const double x = 2;
	const int n = 20;

	powOutput output = myPow(x, n);
	std::cout << "My pow (x ^ n) for x = " << x << " and n = " << n << "  = " << output.result
						<< " Number of operations = " << output.counter << std::endl;
	output = quickPow(x, n);
	std::cout << "Quick pow (x ^ n) for x = " << x << " and n = " << n << "  = " << output.result
						<< " Number of operations = " << output.counter << std::endl;

	return 0;
}
