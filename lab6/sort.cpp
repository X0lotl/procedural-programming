//
// Created by x0lotl on 11/5/22.
//
#include "cmath"
#include "string"
#include <iostream>
#include <map>


int *generateRandomArray() {
	static int randomArray[100];

	for (int i = 0; i < 100; i++) {
		randomArray[i] = (int) random();
	}

	return randomArray;
}

std::string arrayToString();

void testSortArray() {
	int *randomArrayPtr;

	randomArrayPtr = generateRandomArray();

	for (int i = 0; i < 100 ; i++) {
		std::cout << i << " : " << randomArrayPtr[i] << std::endl;
	}
}