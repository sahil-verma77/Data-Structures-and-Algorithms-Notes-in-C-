#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 76, 34, 67, 50, 67};
    int n = sizeof(arr)/4;
    int target = 67;

    bool flag = false;
    for (int i = 0; i <= n-1; i++) {
        if (arr[i] == target) {
            flag = true;
            break;
        }
    }
    if (flag == false) cout << "Element Not Found";
    else cout << "Element Found";

}