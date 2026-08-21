#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(7);
    cout << v.size() << " " << v.capacity() << endl; // 7 7
    v.push_back(-6);
    cout << v.size() << " " << v.capacity() << endl; // 8 14
}