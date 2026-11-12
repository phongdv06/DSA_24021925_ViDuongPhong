#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

struct Item 
{
    string key;
    string value;
};
struct SymbolTable 
{
    Item a[MAX];
    int size;
};
void init(SymbolTable &st) 
{
    st.size = 0;
}
bool put(SymbolTable &st, string key, string value) 
{

    for (int i = 0; i < st.size; i++) 
    {
        if (st.a[i].key == key) 
        {
            st.a[i].value = value;
            return true;
        }
    }
    if (st.size == MAX)
        return false;

    st.a[st.size].key = key;
    st.a[st.size].value = value;
    st.size++;
    return true;
}
bool get(SymbolTable st, string key, string &value) 
{

    for (int i = 0; i < st.size; i++) 
    {
        if (st.a[i].key == key) 
        {
            value = st.a[i].value;
            return true;
        }
    }

    return false;
}
bool contains(SymbolTable st, string key) 
{

    for (int i = 0; i < st.size; i++) 
    {
        if (st.a[i].key == key)
            return true;
    }

    return false;
}
bool removeNode(SymbolTable &st, string key) 
{

    for (int i = 0; i < st.size; i++) 
    {
        if (st.a[i].key == key) 
        {
            for (int j = i; j < st.size - 1; j++) 
            {
                st.a[j] = st.a[j + 1];
            }

            st.size--;

            return true;
        }
    }

    return false;
}
int getSize(SymbolTable st) 
{
    return st.size;
}
bool isEmpty(SymbolTable st) 
{
    return st.size == 0;
}
void display(SymbolTable st) 
{
    cout << "Symbol Table - Array\n";

    for (int i = 0; i < st.size; i++) 
    {
        cout << st.a[i].key << " : "
             << st.a[i].value << endl;
    }
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

    return 0;
}
