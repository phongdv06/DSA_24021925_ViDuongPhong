#include <iostream>
#include "../week1/LList.h" 

using namespace std;
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

LLStack::LLStack() 
{
    head = nullptr;
}

bool LLStack::isEmpty() 
{
    return head == nullptr;
}

void LLStack::push(int data) 
{
    insertFirst(head, data);
}

int LLStack::pop() 
{
    if (isEmpty()) return -1;
    int topValue = head->data;
    DeleteFisrt(head);
    return topValue;
}
int LLStack::top() 
{
    if (isEmpty()) return -1;
    return head->data;
}
int LLStack::size() 
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
    LLStack llStack;
    
    cout << "Stack rỗng? " << (llStack.isEmpty() ? "True" : "False") << endl;

    cout << "Push: 5, 15, 25" << endl;
    llStack.push(5);
    llStack.push(15);
    llStack.push(25);

    cout << "Kích thước (size) hiện tại: " << llStack.size()  << endl;
    cout << "Phần tử trên cùng (top): " << llStack.top()  << endl;

    cout << "Pop phần tử: " << llStack.pop()  << endl;
    cout << "Kích thước sau khi Pop: " << llStack.size()  << endl;
    cout << "Phần tử trên cùng (top) mới: " << llStack.top()  << endl;
    cout << "Stack rỗng? " << (llStack.isEmpty() ? "True" : "False") << endl;
    return 0;
}