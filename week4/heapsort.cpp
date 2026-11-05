#include <iostream>
using namespace std;

void sink(int a[], int n, int K) {
    while (2 * K <= n) {
        int j = 2 * K; 
        if (j < n && a[j] < a[j + 1]) {
            j++;
        }
        if (a[K] >= a[j]) {
            break;
        }
        swap(a[K], a[j]);
        K = j; 
    }
}
void heapSort(int a[], int n) {
    for (int k = n / 2; k >= 1; k--) {
        sink(a, n, k);
    }
    while (n > 1) {
        swap(a[1], a[n]); 
        n--;              
        sink(a, n, 1);   
    }
}
int main() {
    int a[] = { -1, 12, 11, 13, 5, 6, 7 };
    int n = 6; 
    cout << "Mang ban dau: ";
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    heapSort(a, n);
    cout << "\nMang sau khi sap xep (Heap Sort): ";
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}