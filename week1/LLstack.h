
#ifndef LLSTACK_H
#define LLSTACK_H

#include "LinkedList.h"

class LLStack {
private:
    SLinkedList a;

public:
    LLStack();
    void push(int data);
    int pop();
    int top();
    bool isEmpty();
};

#endif
