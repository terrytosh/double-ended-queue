#include <iostream>

#include "deq.h"

int main() {
    Deq dq(3, 9);     //  9 9 9
    dq.pushFront(12); // 12 9 9 9
    dq.pushBack(3);   // 12 9 9 9 3
    int back = dq.popBack(); // 12 9 9 9
    int front = dq.popFront(); // 9 9 9
    dq.printDeq();
    return 0;
}