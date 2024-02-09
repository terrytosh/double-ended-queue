#include <iostream>

#include "deq.h"

int main() {
    Deq dq(3, 9);
    dq.pushFront(12);
    dq.printDeq();
    return 0;
}