#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H

#include "List.h" 

class QueueArray {
private:
    List a;

public:
    QueueArray();
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int peek(); 
    int size();
};

#endif