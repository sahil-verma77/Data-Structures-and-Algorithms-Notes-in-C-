#include <iostream>
using namespace std;
void print(int i, int n) {
    if (i > n) return; // base case
    cout << i << " "; // work
    print(i+1, n); // call
}
int main() {
    // 2 Parameters
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print(1, n);
}