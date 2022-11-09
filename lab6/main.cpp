#include <iostream>
#include "sort.h"
#include "string"

int main() {
  static int arraySize = 100;
	int * sortedArray = testSortArray();

  bool arrayIsSorted = true;

  for (int i = 0; i < arraySize - 1; i++) {
    if (sortedArray[i] > sortedArray[i + 1]) {
      arrayIsSorted = false;
    }
  }

  if (!arrayIsSorted) {
    std::cout << "Array is not sorted" << std::endl;
  } else {
    std::cout << "Array is sorted correctly" << std::endl;
  }

	return 0;
}
