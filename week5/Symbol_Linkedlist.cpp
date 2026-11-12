#include <iostream>
#include <string>
using namespace std;

struct Node 
{
    string key;
    string value;
    Node* next;
};
struct SymbolTable 
{
    Node* head;
    int size;
};

void init(SymbolTable &st) 
{
    st.head = nullptr;
    st.size = 0;
}
void put(SymbolTable &st, string key, string value) 
{
    Node* p = st.head;
    
    while (p != nullptr) 
    {
        if (p->key == key) 
        {
            p->value = value;
            return;
        }
        p = p->next;
    }
    Node* newNode = new Node;

    newNode->key = key;
    newNode->value = value;
    newNode->next = st.head;

    st.head = newNode;
    st.size++;
}
bool get(SymbolTable st, string key, string &value) 
{
    Node* p = st.head;

    while (p != nullptr) 
    {
        if (p->key == key) 
        {
            value = p->value;
            return true;
        }

        p = p->next;
    }

    return false;
}
bool contains(SymbolTable st, string key) 
{
    Node* p = st.head;

    while (p != nullptr) 
    {
        if (p->key == key)
            return true;

        p = p->next;
    }

    return false;
}
bool removeNode(SymbolTable &st, string key) 
{
    Node* p = st.head;
    Node* prev = nullptr;

    while (p != nullptr) 
    {
        if (p->key == key) 
        {

            if (prev == nullptr) 
            {
                st.head = p->next;
            }
            else {
                prev->next = p->next;
            }

            delete p;
            st.size--;

            return true;
        }

        prev = p;
        p = p->next;
    }

    return false;
}
int getSize(SymbolTable st) {
    return st.size;
}

bool isEmpty(SymbolTable st) {
    return st.head == nullptr;
}
void display(SymbolTable st) {
    Node* p = st.head;

    cout << "Symbol Table - Linked List\n";

    while (p != nullptr) {
        cout << p->key << " : "
             << p->value << endl;

        p = p->next;
    }
}
void clear(SymbolTable &st) {
    Node* p = st.head;

    while (p != nullptr) {
        Node* temp = p;
        p = p->next;
        delete temp;
    }

    st.head = nullptr;
    st.size = 0;
}

int main() {
    SymbolTable st;
    init(st);
    put(st, "x", "int");
    put(st, "name", "string");
    put(st, "score", "float");
    display(st);

    string value;

    cout << "\nSearch x:\n";

    if (get(st, "x", value))
        cout << value << endl;
    else
        cout << "Not found\n";

    cout << "\nUpdate x:\n";
    put(st, "x", "double");

    display(st);

    cout << "\nRemove name:\n";
    removeNode(st, "name");

    display(st);

    cout << "\nSize = " << getSize(st) << endl;

    clear(st);

    return 0;
}
