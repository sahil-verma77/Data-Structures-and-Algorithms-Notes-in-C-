#include <iostream>
using namespace std;
void print(int n) { // TC = O(n)
    if (n == 0) return; // base case
    cout << n << " "; // work
    print(n-1); // call
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print(n);
}