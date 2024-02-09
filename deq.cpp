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

void Deq::printDeq() {
    for (int val : deq) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

void Deq::pushFront(int val) {
    deq.push_front(val);
}