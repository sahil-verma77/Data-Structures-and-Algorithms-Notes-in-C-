#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {4, 3, 8, 2, 9};
    // Miltiply even numbers by 2, square the odd numbers
    for (int i = 0; i < v.size(); i++) {
        if(v[i]%2 == 0) {
            v[i] *= 2;
        }
        else v[i] *= v[i];
    }
    
    for (int i = 0; i < v.size(); i++) { // for loop
        cout << v[i] << " ";
    }
    cout << endl;
    for (int i = v.size()-1; i >= 0; i--) { // for loop (reverse)
        cout << v[i] << " ";
    }
    cout << endl;
    for (int ele : v) { // for each loop
        cout << ele << " ";
    }
}