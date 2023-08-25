#include <iostream>
#include <vector>

using namespace std;

bool canJump(vector<int>& nums) {
    int maxReach = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        if (i > maxReach) {
            return false;
        }
        maxReach = max(maxReach, i + nums[i]);
    }
    
    return true;
}

int main() {
    // vector<int> nums1 = {2, 3, 1, 1, 4};
    vector<int> nums2 = {3, 2, 1, 0, 4};
    
    // cout << "Result for nums1: " << (canJump(nums1) ? "true" : "false") << endl;
    cout << "Result for nums2: " << (canJump(nums2) ? "true" : "false") << endl;
    
    return 0;
}
