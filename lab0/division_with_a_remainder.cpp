//
// Created by x0lotl on 9/15/22.
//

unsigned int division(unsigned int m, unsigned int n) {
	unsigned int counter = 0;

	while (m >= n) {
		m -= n;
		counter++;
	}

	return counter;
}