#include <iostream>
#include "../week1/List.h" 

using namespace std;

struct StackArray 
{
    List a;
};

void initStack(StackArray &stack) 
{
    initList(stack.a); 
}

bool isEmpty(StackArray stack) 
{
    return stack.a.size == 0;
}

void push(StackArray &stack, int data) 
{
    insertLast(stack.a, data);
}

int pop(StackArray &stack) 
{
    if (isEmpty(stack)) return -1;
    int topValue = stack.a.a[stack.a.size - 1]; 
    deleteLast(stack.a);                        
    return topValue;
}
int top(StackArray stack) 
{
    if (isEmpty(stack)) return -1;
    return stack.a.a[stack.a.size - 1];
}

int size(StackArray stack) 
{
    return stack.a.size;
}
int main() 
{
    StackArray myStack;
    initStack(myStack);
    cout << "Stack rỗng? " << (isEmpty(myStack) ? "True" : "False") << endl;
    cout << "Push: 10, 20, 30" << endl;
    push(myStack,10);
    push(myStack,20);
    push(myStack,30);
    cout << "Kích thước (size) hiện tại: " << size(myStack) << endl;
    cout << "Phần tử trên cùng (top): " << top(myStack) << endl;
    cout << "Pop phần tử: " << pop(myStack) << endl;
    cout << "Kích thước sau khi Pop: " << size(myStack) << endl;
    cout << "Phần tử trên cùng (top) mới: " << top(myStack) << endl;
    cout << "Stack rỗng? " << (isEmpty(myStack) ? "True" : "False") << endl;
    return 0;
}