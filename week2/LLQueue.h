#ifndef LLQUEUE_H
#define LLQUEUE_H

#include "LList.h" 

class LLQueue {
private:
    Node* head;

public:
    LLQueue();
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int peek(); 
    int size();
};

#endif