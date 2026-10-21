#include <iostream>
#include "../week1/LList.h" 

using namespace std;
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

LLQueue::LLQueue() 
{
    head = nullptr;
}

bool LLQueue::isEmpty() 
{
    return head == nullptr;
}

void LLQueue::enqueue(int data) 
{
    insertLast(head, data);
}

int LLQueue::dequeue() 
{
    if (isEmpty()) return -1;
    int frontValue = head->data;
    DeleteFisrt(head);
    return frontValue;
}
int LLQueue::peek() 
{
    if (isEmpty()) return -1;
    return head->data;
}
int LLQueue::size() 
{
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    LLQueue llQueue;
    
    cout << "Queue rỗng? " << (llQueue.isEmpty() ? "True" : "False") << endl;

    cout << "Enqueue: 50, 150, 250" << endl;
    llQueue.enqueue(50);
    llQueue.enqueue(150);
    llQueue.enqueue(250);

    cout << "Kích thước (size) hiện tại: " << llQueue.size()  << endl;
    cout << "Phần tử đầu tiên (peek): " << llQueue.peek()  << endl;

    cout << "Dequeue phần tử: " << llQueue.dequeue()  << endl;
    cout << "Kích thước sau khi Dequeue: " << llQueue.size()  << endl;
    cout << "Phần tử đầu tiên (peek) mới: " << llQueue.peek()  << endl;
    cout << "Queue rỗng? " << (llQueue.isEmpty() ? "True" : "False") << endl;
    return 0;
}