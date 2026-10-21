#include <iostream>
#include "../week1/LList.h" 

using namespace std;
struct LLQueue {
    Node* head;
};

void initLLQueue(LLQueue &q) 
{
    q.head = nullptr;
}

bool isEmpty(LLQueue q) 
{
    return q.head == nullptr;
}
void enqueue(LLQueue &q, int data) 
{
    insertLast(q.head, data); 
}
int dequeue(LLQueue &q) 
{
    if (isEmpty(q)) return -1;
    int frontValue = q.head->data; 
    DeleteFisrt(q.head);           
    return frontValue;
}
int peek(LLQueue q) 
{
    if (isEmpty(q)) return -1;
    return q.head->data;
}
int size(LLQueue q) 
{
    int count = 0;
    Node* temp = q.head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    LLQueue llQueue;
    initLLQueue(llQueue);
    cout << "Queue rỗng? " << (isEmpty(llQueue) ? "True" : "False") << endl;

    cout << "Enqueue: 50, 150, 250" << endl;
    enqueue(llQueue,50);
    enqueue(llQueue,150);
    enqueue(llQueue,250);

    cout << "Kích thước (size) hiện tại: " << size(llQueue)  << endl;
    cout << "Phần tử đầu tiên (peek): " << peek(llQueue)  << endl;

    cout << "Dequeue phần tử: " << dequeue(llQueue)  << endl;
    cout << "Kích thước sau khi Dequeue: " << size(llQueue)  << endl;
    cout << "Phần tử đầu tiên (peek) mới: " << peek(llQueue)  << endl;
    cout << "Queue rỗng? " << (isEmpty(llQueue) ? "True" : "False") << endl;
    return 0;
}