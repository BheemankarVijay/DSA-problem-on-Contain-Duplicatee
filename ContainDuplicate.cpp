#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool containsDuplicate(vector<int>& num) {
    sort(num.begin(), num.end());
    for (int i = 1; i < num.size(); i++) {
        if (num[i] == num[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements (sorted) of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (containsDuplicate(nums)) {
        cout << "The vector contains duplicates!" << endl;
    } else {
        cout << "No duplicates found in the vector." << endl;
    }

    return 0;
}