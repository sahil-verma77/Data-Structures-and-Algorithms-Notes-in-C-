#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 3, 8, 2, 9}; // 2 3 4 8 9
    for (int ele : v) cout << ele << " ";
    cout << endl;
    
    // TC = n(log n)
    sort(v.begin()+1,v.end()-1); // Sort
    for (int ele : v) cout << ele << " ";
    cout << endl;
    
    reverse(v.begin()+1,v.end()); // Reverse
    for (int ele : v) cout << ele << " ";
    cout << endl;
}