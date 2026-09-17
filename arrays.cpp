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
        resize(capacity * 2);
    }

    *(data+size) = item;

    size++;

}

void Vector::insert(int index, int item){
    if(index < 0 || index > size){
        throw std::out_of_range("Index out of Bounds");
    }

    if(size == capacity){
        resize(capacity * 2);
    }

    for (int i = size; i > index; i--){
        *(data + i) = *(data + i -1);
    }

    *(data + index) = item;

    size++;

}

void Vector::prepend(int item){
    insert(0, item);
}

int Vector::pop(){
    if(isEmpty()){
        throw std::out_of_range("Cannot pop from an empty vector");
    }

    int removedItem = *(data+ size - 1);
    size--;

    if (size == capacity / 4 && capacity > 1) {
        resize(capacity / 2);
    }

    return removedItem;

}

void Vector::removeAt(int index){
    if(index < 0 || index >= size){
        throw std::out_of_range("Index out of bounds");
    }

    for(int i = index; i < size - 1; i++){
        *(data + i) = *(data + i + 1);
    }
    
    size--;

}

void Vector::remove(int item){
    int i = 0;

    while(i < size){
        if(*(data + i) == item){
            removeAt(i);
        } else{
            i++;
        }
    }
}

int Vector::find(int item){
    int i = 0;

    while (i < size){
       if (*(data + i) == item){
        return i;
       }
       i++;
    }

    return -1;
}

void Vector::resize(int newCapacity){
    int* newData = new int[newCapacity];

    for(int i = 0; i < size; i++){
        newData[i] = data[i];
    }

    delete[] data;

    data = newData;
    capacity = newCapacity;
}
