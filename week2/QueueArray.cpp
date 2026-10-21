#include <iostream>
#include "../week1/List.h" 

using namespace std;

struct QueueArray {
    List a;
};
void initQueue(QueueArray &q) 
{
    initList(q.a);
}
bool isEmpty(QueueArray q) 
{
    return q.a.size == 0;
}

void enqueue(QueueArray &q, int data)
{
    insertLast(q.a, data);
}
int dequeue(QueueArray &q) 
{
    if (isEmpty(q)) return -1;
    int frontValue = q.a.a[0]; 
    deleteFirst(q.a);          
    return frontValue;
}
int peek(QueueArray q) 
{
    if (isEmpty(q)) return -1;
    return q.a.a[0];
}

int size(QueueArray q) 
{
    return q.a.size;
}
int main()
{
    QueueArray queueArr;
    initQueue(queueArr);
    cout << "Queue rỗng? " << (isEmpty(queueArr) ? "True" : "False") << endl;

    cout << "Enqueue: 100, 200, 300" << endl;
    enqueue(queueArr,100);
    enqueue(queueArr,200);
    enqueue(queueArr,300);

    cout << "Kích thước (size) hiện tại: " << size(queueArr)  << endl;
    cout << "Phần tử đầu tiên (peek): " << peek(queueArr) << endl;

    cout << "Dequeue phần tử: " << dequeue(queueArr)  << endl;
    cout << "Kích thước sau khi Dequeue: " << size(queueArr)  << endl;
    cout << "Phần tử đầu tiên (peek) mới: " << peek(queueArr)  << endl;
    cout << "Queue rỗng? " << (isEmpty(queueArr) ? "True" : "False") << endl;
    return 0;
}