#include <iostream>
#include "arrays.h"

int main() { 

    Vector vector;

    std::cout << "Size: " << vector.getSize() << std::endl;
    std::cout << "Size: " << vector.getCapacity() << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Is empty?: " << vector.isEmpty() << std::endl;

    return 0;
}