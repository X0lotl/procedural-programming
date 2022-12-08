// Danylo Khomichenko

#include <iostream>

char* concotinateCharArrays (char * a, int aSize, char * b, int bSize) {
    int ArraySize = aSize + bSize;
    static char outputString[1000];

    for (int i = 0; i < aSize + bSize; i++){
        if (i < aSize) {
            outputString[i] = a[i];
        } else {
            outputString[i] = b[i-aSize];
        }
    }

    std::cout << outputString << std::endl;

    return outputString;
}