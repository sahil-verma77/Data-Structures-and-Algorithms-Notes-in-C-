#include <iostream>
using namespace std;
void method1(int a[], int b[], int m, int n) {
    int c[m+n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        }
        else { // (b[j] <= a[i])
            c[k++] = b[j++];
        }
    }
    while (j < n) {
        c[k++] = b[j++];
    }
    while (i < m) {
        c[k++] = a[i++];
    }
    for (int ele : c) cout << ele << " ";
}

void method2(int a[], int b[], int m, int n) {
    int c[m+n];
    int i = m-1, j = n-1, k = m+n-1;
    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            c[k--] = a[i--];
        }
        else { // b[i] >= a[i]
            c[k--] = b[j--];
        }
    }
    while (i >= 0) {
        c[k--] = a[i--];
    }
    while (j >= 0) {
        c[k--] = b[j--];
    }
    for (int ele : c) cout << ele << " ";
}

int main() {
    // Merge two sorted arrays
    int a[] = {10,20,40,70,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4, n = sizeof(b)/4;

    method1(a, b, m, n);
    cout << endl;
    method2(a, b, m, n);
}