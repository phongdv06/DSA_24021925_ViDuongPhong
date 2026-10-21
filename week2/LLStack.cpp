#include <iostream>
#include "../week1/LList.h" 

using namespace std;
struct LLStack {
    Node* head;
};
void initLLStack(LLStack &st) 
{
    st.head = nullptr;
}

bool isEmpty(LLStack st) 
{
    return st.head == nullptr;
}

void push(LLStack &st, int data) 
{
    insertFirst(st.head, data); 
}
int pop(LLStack &st) 
{
    if (isEmpty(st)) return -1;
    int topValue = st.head->data; 
    DeleteFisrt(st.head);         
    return topValue;
}
int top(LLStack st) 
{
    if (isEmpty(st)) return -1;
    return st.head->data;
}
int size(LLStack st) 
{
    int count = 0;
    Node* temp = st.head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    LLStack llStack;
    initLLStack(llStack);
    cout << "Stack rỗng? " << (isEmpty(llStack) ? "True" : "False") << endl;

    cout << "Push: 5, 15, 25" << endl;
    push(llStack,5);
    push(llStack,15);
    push(llStack,25);

    cout << "Kích thước (size) hiện tại: " << size(llStack)  << endl;
    cout << "Phần tử trên cùng (top): " << top(llStack)  << endl;

    cout << "Pop phần tử: " << pop(llStack)  << endl;
    cout << "Kích thước sau khi Pop: " << size(llStack)  << endl;
    cout << "Phần tử trên cùng (top) mới: " << top(llStack)  << endl;
    cout << "Stack rỗng? " << (isEmpty(llStack) ? "True" : "False") << endl;
    return 0;
}