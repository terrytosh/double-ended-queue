#include <iostream>
#include <list>

#include "deq.h"

Deq::Deq(int size, int value) {
    for (int i = 0; i < size; i++) {
        deq.push_back(value);
    }
    std::cout << "Deque successfully created..." << std::endl;
}

Deq::~Deq() {
    std::cout << "Deque successfully destroyed..." << std::endl;
}

// Print the elements
void Deq::printDeq() {
    for (int val : deq) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

// Insert an element at the front
void Deq::pushFront(int val) {
    deq.push_front(val);
}

// Insert an element at the back
void Deq::pushBack(int val) {
    deq.push_back(val);
}

// Remove and return the element at the front
int Deq::popFront() {
    int output = deq.front();
    deq.pop_front();
    return output;
}

// Remove and return the element at the back
int Deq::popBack() {
    int output = deq.back();
    deq.pop_back();
    return output;
}