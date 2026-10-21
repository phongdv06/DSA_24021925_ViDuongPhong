#ifndef STACKARRAY_H
#define STACKARRAY_H

#include "List.h" 

class StackArray {
private:
    List a;

public:
    StackArray();
    bool isEmpty();
    void push(int data);
    int pop();
    int top();  
    int size(); 
};

#endif