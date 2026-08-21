#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,5,6,3,4,2};
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 3) count++;
    }
    cout << count;

}