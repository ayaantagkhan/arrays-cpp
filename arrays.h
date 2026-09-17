#pragma once

class Vector{
private:
    int* data;
    int size;
    int capacity;

    void resize(int newCapacity);
    
public:
    Vector();

    int getSize();

    int getCapacity();

    bool isEmpty();

    int at(int index);

    void push(int item);

    void insert(int index, int item);

    void prepend(int item);

    int pop();

    void removeAt(int index);

    void remove(int item);

    int find(int item);

};