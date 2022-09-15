#include <iostream>
#include "sum.h"
#include "sin.h"

int main() {

    std::cout << "Sum for n = 20; x = 5 is: " << sum(20, 5) << std::endl;

    std::cout << "Sin for x = 0.5; E = 0.0001 is: " << sin(0.5, 0.0001) << std::endl;

    return 0;
}