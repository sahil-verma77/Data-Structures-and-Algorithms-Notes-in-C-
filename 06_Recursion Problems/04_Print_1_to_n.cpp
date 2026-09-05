#include <iostream>
using namespace std;
int n; // global variable
void print(int x) {
    if (x > n) return; // base case
    cout << x << " "; // work
    print(x+1); // call
}
int main() {
    cout << "Enter a number: ";
    cin >> n;

    print(1);
}