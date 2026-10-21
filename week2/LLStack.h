#ifndef LLSTACK_H
#define LLSTACK_H

#include "LList.h" 

class LLStack {
private:
    Node* head;

public:
    LLStack();
    bool isEmpty();
    void push(int data);
    int pop();
    int top();  
    int size();
};

#endif