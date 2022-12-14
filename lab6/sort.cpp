//
// Created by x0lotl on 11/5/22.
//
#include "cmath"
#include "string"
#include <iostream>
#include <map>

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void bubbleSort(int *arrayPtr, int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arrayPtr[j] > arrayPtr[j + 1])
        swap(&arrayPtr[j], &arrayPtr[j + 1]);
    }
  }

}


int *generateRandomArray() {
  static int randomArray[100];

  for (int &i: randomArray) {
    i = (int) random() % 100 + 1;
  }

  return randomArray;
}

int *testSortArray() {
  int *randomArrayPtr;

  randomArrayPtr = generateRandomArray();

  std::map<int, int> randomArrayInMap;

  for (int i = 0; i < 100; i++) {
    randomArrayInMap.insert(std::pair<int, int>(randomArrayPtr[i], i + 1));
    std::cout << i << " : " << randomArrayPtr[i] << std::endl;
  }

  std::cout << "\n \nSorted array " << std::endl;

  bubbleSort(randomArrayPtr, 100);
  for (int i = 0; i < 100; i++) {
    std::cout << i << " : " << randomArrayPtr[i] << std::endl;
  }

  bool arrayConteinsOnlyElements = true;

  for (int i = 0; i < 100; i++) {
    if (randomArrayInMap[randomArrayPtr[i]] == 0) {
      arrayConteinsOnlyElements = false;
    }
  }

  if (arrayConteinsOnlyElements) {
    std::cout << "Sorted array contains element only from random array" << std::endl;
  } else {
    std::cout << "Array contains extra elements" << std::endl;
  }

  return randomArrayPtr;
}