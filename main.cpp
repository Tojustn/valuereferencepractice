#include <iostream>

#include "src/increment.hpp"

int main() {
    int number{};
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;

    std::cout << valueIncrement(number) << std::endl;

    referenceIncrement(number);
    std::cout << number << std::endl;
}
