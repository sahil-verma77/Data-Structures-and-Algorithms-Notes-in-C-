#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> onePlus(vector<int>& digits) {
    int carry = 1;
    vector<int> ans;
    for (int i = digits.size()-1; i >= 0; i--) {
        int sum = digits[i] + carry;
        if (sum < 10) {
            carry = 0;
            ans.push_back(sum);
        }
        else {
            carry = 1;
            ans.push_back(0);
        }
    }
    if (carry == 1) ans.push_back(1);
    reverse(ans.begin(),ans.end());
    return ans;
}

void print(vector<int>& result) {
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}

int main() {
    vector<int> digits = {1,2,3};

    vector<int> result = onePlus(digits);
    print (result);
}