#include "arrays.h"
#include <stdexcept>

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

int Vector::at(int index){

    if(index< 0 || index >= size){ 
        throw std::out_of_range("Index out of bounds");
    }

    return*(data+index);
}

void Vector::push(int item){

    if(size == capacity){

    }

    *(data+size) = item;

    size++;

}

