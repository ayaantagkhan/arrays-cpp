#include <iostream>
#include "arrays.h"

int main() { 

    Vector vector;

    vector.push(10);
    vector.push(20);
    vector.push(30);

    std::cout << "Size: " << vector.getSize() << std::endl;
    std::cout << "Size: " << vector.getCapacity() << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Is empty?: " << vector.isEmpty() << std::endl;

    std::cout << vector.at(0) << std::endl;
    std::cout << vector.at(1) << std::endl;
    std::cout << vector.at(2) << std::endl;

    return 0;
}