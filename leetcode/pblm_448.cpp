#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findDisappeared(vector<int>& nums) {
    vector<int> result;
    unordered_set<int> s;

    // Insert all elements of the vector into the hash table.
    for (int i = 0; i < nums.size(); i++) {
        s.insert(nums[i]);
    }

    // Check each number from 1 to n for its presence in the hash table.
    for (int i = 1; i <= nums.size(); i++) {
        if (s.find(i) == s.end()) { // this will check Boolean expression, which will be true if the element 'i' is not present in the container 's', and false if it is present.
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> result = findDisappeared(nums);

    cout << "The disappeared elements are: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
