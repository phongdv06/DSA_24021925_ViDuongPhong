#include <iostream>
using namespace std;

struct MaxPQ {
private:
    int a[100]; 
    int n;      
    void swim(int K) {
        while (K > 1 && a[K / 2] < a[K]) {
            swap(a[K], a[K / 2]);
            K = K / 2; 
        }
    }
    void sink(int K) {
        while (2 * K <= n) {
            int j = 2 * K;
            if (j < n && a[j] < a[j + 1]) {
                j++;
            }
            if (a[K] >= a[j]) break;
            swap(a[K], a[j]);
            K = j;
        }
    }

public:
    MaxPQ() {
        n = 0;
    }
    void insert(int v) {
        a[++n] = v; 
        swim(n);    
    }
    int delMax() {
        if (isEmpty()) return -1; 
        int max_val = a[1];  
        swap(a[1], a[n]);   
        n--;                 
        sink(1);             
        return max_val;
    }
    bool isEmpty() {
        return n == 0;
    }
    int max() {
        if (isEmpty()) return -1;
        return a[1];
    }
    int size() {
        return n;
    }
};

int main() {
    MaxPQ pq; 
    pq.insert(10);
    pq.insert(50);
    pq.insert(20);
    pq.insert(40);
    pq.insert(30);
    cout << "So phan tu (size): " << pq.size() << endl;
    cout << "Phan tu lon nhat (max): " << pq.max() << endl;
    cout << "Lay cac phan tu ra theo thu tu Max Heap (delMax): ";
    while (!pq.isEmpty()) {
        cout << pq.delMax() << " ";
    }
    cout << endl;

    return 0;
}