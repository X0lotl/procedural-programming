//
// Created by x0lotl on 10/7/22.
//

#include "powOutput.h"


powOutput myPow(double x, int n) {
	int counter = 0;
	double output = 1;

	while (counter < n) {
		output *= x;
		counter++;
	}

	return {output, counter};
}

powOutput quickPow(double x, int n) {
	double output = 1;
	int counter = 0;

	while (n != 0) {
		if (n % 2 == 1) {
			output *= x;
		}
		x *= x;
		n /= 2;
		counter++;
	}

	return {output, counter};
}

powOutput myPowRecurcive(double x, int n, int counter) {
	powOutput tempPowOutput = powOutput(0, 0);
	if (n != 0) {
		tempPowOutput = myPowRecurcive(x, n - 1, counter++);
		return {x * tempPowOutput.result, counter + tempPowOutput.counter};
	} else {
		return {1, counter + tempPowOutput.counter};
	}
}

powOutput quickPowRecurcive(double x, int n, int counter) {
	powOutput tempPowOutput = powOutput(0,0);

	if (n == 0) {
		return {1, counter + tempPowOutput.counter};
	}
	if (n % 2 == 0) {
		tempPowOutput = quickPowRecurcive(x, n / 2, counter++);
		return {tempPowOutput.result * tempPowOutput.result, counter + tempPowOutput.counter};
	} else {
		tempPowOutput = quickPowRecurcive(x, n - 1, counter++);
		return {x * tempPowOutput.result, counter + tempPowOutput.counter};
	}
}

