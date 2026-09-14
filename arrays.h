#pragma once

class Vector{
private:
    int* data;
    int size;
    int capacity;

public:
    Vector();

    int getSize();

    int getCapacity();

    bool isEmpty();

};