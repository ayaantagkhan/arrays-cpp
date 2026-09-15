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

    int at(int index);

    void push(int item);

    void insert(int index, int item);

};