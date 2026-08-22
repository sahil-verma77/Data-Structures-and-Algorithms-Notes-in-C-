#include <iostream>
using namespace std;

int main() {
    int arr[] = {74, 96, 9};
    // int arr[] = {1,2,3,4};
    int n = sizeof(arr)/4;

    int product = 1;
    for (int i = 0; i <= n-1; i++) {
        product *= arr[i];
    }
    cout << product;
}