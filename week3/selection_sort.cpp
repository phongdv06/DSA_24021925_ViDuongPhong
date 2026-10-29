#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        //Tim gia tri nho nhat trong mang
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(a[min], a[i]);
        }
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

    selectionSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}