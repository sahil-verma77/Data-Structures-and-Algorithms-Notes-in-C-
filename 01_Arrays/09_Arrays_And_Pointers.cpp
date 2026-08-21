#include <iostream>
using namespace std;

int main() {
    int* brr = new int[7]; // Dynamic Allocation
    brr[0] = 4;
    for (int i = 0; i < 7; i++) {
        cout << brr[i] << " ";
    }
}