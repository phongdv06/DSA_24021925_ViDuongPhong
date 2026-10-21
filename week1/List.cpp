#include <iostream>
using namespace std;

struct List 
{
    int size;
    int a[100];
};

void initList(List &L) 
{
    L.size = 0;
}

void getIdArr(List L, int index) 
{
    if (index >= 0 && index < L.size) 
    {
        cout << L.a[index] << endl;
    }
}

void insertLast(List &L, int x) 
{
    if (L.size < 100) 
    { 
        L.a[L.size] = x;
        L.size++;
    }
}

void insertFirst(List &L, int x) 
{
    if (L.size < 100) {
        for(int i = L.size; i > 0; i--) 
        {
            L.a[i] = L.a[i - 1];
        }
        L.a[0] = x;
        L.size++;
    }
}

void insertValue(List &L, int x, int index) 
{
    if (L.size < 100 && index >= 0 && index <= L.size) 
    {
        for(int i = L.size; i > index; i--) 
        {
            L.a[i] = L.a[i - 1];
        }
        L.a[index] = x;
        L.size++;
    }
}

void deleteFirst(List &L) 
{
    if (L.size > 0) 
    { 
        for (int i = 0; i < L.size - 1; i++) 
        {
            L.a[i] = L.a[i + 1];
        }
        L.size--;
    }
}

void deleteLast(List &L) {
    if (L.size > 0) {
        L.size--;
    }
}

void deleteIdArr(List &L, int index) {
    if (L.size > 0 && index >= 0 && index < L.size) 
    {
        for (int i = index; i < L.size - 1; i++) 
        {
            L.a[i] = L.a[i + 1];
        }
        L.size--;
    }
}

void printForward(List L) {
    for (int i = 0; i < L.size; i++) 
    {
        cout << L.a[i] << " ";
    }
    cout << endl;
}

void printReverse(List L) {
    for (int i = L.size - 1; i >= 0; i--) 
    {
        cout << L.a[i] << " ";
    }
    cout << endl;
}

int main() {
    List L;          
    initList(L);     

    insertLast(L, 10);
    insertLast(L, 20);
    insertLast(L, 30);

    cout << "In vi tri thu 1 (index 1):" << endl;
    getIdArr(L, 1); 
    
    cout << "In xuoi mang:" << endl;
    printForward(L);

    cout << "Chen 5 vao vi tri dau:" << endl;
    insertFirst(L, 5);
    printForward(L);
    
    cout << "Chen 15 vao vi tri thu 3 (index 2):" << endl;
    insertValue(L, 15, 2);
    printForward(L);
    
    cout << "Xoa vi tri dau:" << endl;
    deleteFirst(L);
    printForward(L);

    cout << "Xoa vi tri cuoi:" << endl;
    deleteLast(L);
    printForward(L);
    
    cout << "Xoa vi tri thu 2 (index 1):" << endl;
    deleteIdArr(L, 1);
    printForward(L);
    
    cout << "In nguoc mang:" << endl;
    printReverse(L);

    return 0;
}