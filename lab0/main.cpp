#include <iostream>
#include "sum.h"
#include "sin.h"
#include "division_with_a_remainder.h"

int main() {

    std::cout << "Sum for n = 20; x = 5 is: " << sum(20, 5) << std::endl;

    std::cout << "Sin for x = 0.5; E = 0.0001 is: " << sin(0.5, 0.0001) << std::endl;

    std::cout << "Division m/n , where m = 100, n = 8 is: " << division(100, 8) << " Referent: " << 100/8 <<  std::endl;

    return 0;
}