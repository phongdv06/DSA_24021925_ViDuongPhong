#include "QueueArray.h"

QueueArray::QueueArray() 
{
    initList(a);
}

bool QueueArray::isEmpty() 
{
    return a.size == 0;
}

void QueueArray::enqueue(int data) 
{
    insertLast(a, data);
}

int QueueArray::dequeue() 
{
    if (isEmpty()) return -1;
    int frontValue = a.a[0];
    deleteFirst(a);
    return frontValue;
}
int QueueArray::peek() 
{
    if (isEmpty()) return -1;
    return a.a[0];
}

int QueueArray::size() 
{
    return a.size;
}
int main()
{
    QueueArray queueArr;
    
    cout << "Queue rỗng? " << (queueArr.isEmpty() ? "True" : "False") << endl;

    cout << "Enqueue: 100, 200, 300" << endl;
    queueArr.enqueue(100);
    queueArr.enqueue(200);
    queueArr.enqueue(300);

    cout << "Kích thước (size) hiện tại: " << queueArr.size()  << endl;
    cout << "Phần tử đầu tiên (peek): " << queueArr.peek() << endl;

    cout << "Dequeue phần tử: " << queueArr.dequeue()  << endl;
    cout << "Kích thước sau khi Dequeue: " << queueArr.size()  << endl;
    cout << "Phần tử đầu tiên (peek) mới: " << queueArr.peek()  << endl;
    cout << "Queue rỗng? " << (queueArr.isEmpty() ? "True" : "False") << endl;
    return 0;
}