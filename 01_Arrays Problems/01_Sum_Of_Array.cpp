#include <iostream>
using namespace std;

int main() {
    int arr[] = {74, 96, 9, 57, 62, 35, 5, 1, 88, 34, 90, 103};
    int n = sizeof(arr)/4;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum;
}