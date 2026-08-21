#include <iostream>
#include <vector>
#include <algorithm>
// Array is by default pass by reference.
// Vector is by default pass by value.
using namespace std;
void change(vector<int> v) { // By default:- Pass by value
    v[2] = 99;
}
// void change(vector<int>& v) { // Pass by reference
//     v[2] = 99;
// }
int main() {
    vector<int> v = {4, 3, 8, 2, 9, 7};
    change(v);
    cout << v[2] << endl;
}