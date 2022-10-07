//
// Created by x0lotl on 10/7/22.
//

#include <iostream>
#include "powOutput.h"
#include "map"


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
	int counter = 0;
	double output = 1;

	std::map<int, double> defaultPows;

	double tempPow = x;

	for (int i = 1; i < n; i *= 2) {
		defaultPows.insert(std::pair<int, double>(i, tempPow));
		tempPow *= tempPow;
		counter++;
	}

	int tempPower = 0;
	for (auto it = --(defaultPows.cend()); tempPower < n; --it) {
		if (tempPower + it->first <= n ) {
			output *= it->second;
			tempPower += it->first;
		}

		counter++;
	}

	return {output, counter};
}