#include <iostream>
#include "mypows.h"
#include "powOutput.h"

int main() {
	const double x = 2.5;
	const int n = 14;

	powOutput output = myPow(x, n);
	std::cout << "My pow (x ^ n) for x = " << x << " and n = " << n << "  = " << output.result
						<< " Number of operations = " << output.counter << std::endl;

	output = quickPow(x, n);
	std::cout << "Quick pow (x ^ n) for x = " << x << " and n = " << n << "  = " << output.result
						<< " Number of operations = " << output.counter << std::endl;

	output = myPowRecurcive(x, n, 0);
	std::cout << "My pow Recurcive (x ^ n) for x = " << x << " and n = " << n << "  = " << output.result
						<< " Number of operations = " << output.counter << std::endl;

	output = quickPowRecurcive(x, n, 0);
	std::cout << "Quick pow Recurcive (x ^ n) for x = " << x << " and n = " << n << "  = " << output.result
						<< " Number of operations = " << output.counter << std::endl;

	std::cout
		<< "CONCLUSION: so the fastest by the number of operations is recursive fast pow, a little less - recursive, more than 3 times slower - ordinary pow"
		<< std::endl;

	return 0;
}
