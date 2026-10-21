#include <iostream>
#include "../week1/List.h" 

using namespace std;

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

StackArray::StackArray() 
{
    initList(a);
}

bool StackArray::isEmpty() 
{
    return a.size == 0;
}

void StackArray::push(int data) 
{
    insertLast(a, data);
}

int StackArray::pop() 
{
    if (isEmpty()) return -1;
    int topValue = a.a[a.size - 1];
    deleteLast(a);
    return topValue;
}
int StackArray::top() 
{
    if (isEmpty()) return -1;
    return a.a[a.size - 1];
}

int StackArray::size() 
{
    return a.size;
}
int main() {
    StackArray stackArr;
    cout << "Stack rỗng? " << (stackArr.isEmpty() ? "True" : "False") << endl;

    cout << "Push: 10, 20, 30" << endl;
    stackArr.push(10);
    stackArr.push(20);
    stackArr.push(30);

    cout << "Kích thước (size) hiện tại: " << stackArr.size() << endl;
    cout << "Phần tử trên cùng (top): " << stackArr.top() << endl;

    cout << "Pop phần tử: " << stackArr.pop() << endl;
    cout << "Kích thước sau khi Pop: " << stackArr.size() << endl;
    cout << "Phần tử trên cùng (top) mới: " << stackArr.top() << endl;
    cout << "Stack rỗng? " << (stackArr.isEmpty() ? "True" : "False") << endl;

    return 0;
}