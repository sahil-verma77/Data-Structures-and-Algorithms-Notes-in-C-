#include <iostream>
using namespace std;
void print(int n) {
    if (n == 0) return; // base case
    print(n-1); // call
    cout << n << " "; // work
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print(n);
}