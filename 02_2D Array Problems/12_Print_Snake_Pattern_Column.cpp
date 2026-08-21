#include <iostream>
using namespace std;

int main() {
    int arr[][5] = {{6,0,9,2,3},{5,2,6,0,9},{8,4,8,1,7},{4,1,7,3,5}};
    for (int j = 0; j < 5; j++) {
        if (j%2 == 0) {
            for (int i = 3; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
        else {
            for (int i = 0; i < 4; i++) {
                cout << arr[i][j] << " ";
            }
        }
    }

}