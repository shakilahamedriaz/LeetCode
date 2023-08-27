#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0; // If the vector is empty, there are no duplicates to remove
    }

    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j]; // Fix the assignment here
        }
    }

    return i + 1; // Return the count of unique elements
}

int main() {
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int uniqueCount = removeDuplicates(nums);

    cout << "Total unique array: " << uniqueCount << endl;
    cout << "Array after removing duplicate elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
