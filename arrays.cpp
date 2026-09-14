#include "arrays.h"

Vector::Vector() {
    capacity = 16;
    size = 0;
    data = new int[capacity];

}

int Vector::getSize() {
        return size;
}

int Vector::getCapacity() {
        return capacity;
}

bool Vector::isEmpty() {
    return size == 0;
}
