#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void InsertSort(vector<int>& a, int n)
{
    //Lay tu phan sau de so sanh voi cac vi tri truoc
    for (int i = 1; i < n ; i++)
    {
        int key = a[i];
        int j = i - 1;
        while( j>=0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;//Giam j de so sanh tiep voi key de doi neu lon hon
        }
        a[j+1]=key;// khi thoat vong lap thi j<0 nen can cong them 1 de dua ve vi tri mang dau tien
    }
}

int main()
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    vector<int> a(n);

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    InsertSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}