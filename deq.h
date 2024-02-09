#ifndef DEQ_H
#define DEQ_H

#include <list>

class Deq {
    private:
        std::list<int> deq;

    public:
        Deq(int size, int value);
        ~Deq();
        void printDeq();
        void pushFront(int val);
        void pushBack(int val);
        int popFront();
        int popBack();
};

#endif /* DEF_H */