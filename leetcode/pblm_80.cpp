#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;
        std::vector<int> res;
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (const auto x : mp) {
            int data = x.first;
            int freq = x.second;

            if (freq == 1) {
                res.push_back(data);
                k++;
            } else if (freq == 2) {
                res.push_back(data);
                res.push_back(data);
                k = k + 2;
            } else if (freq > 2) {
                res.push_back(data);
                res.push_back(data);
                k = k + 2;
            }
        }

        for (int i = k; i < nums.size(); i++) {
            res.push_back(' ');
        }

        nums = res;
        return k;
    }
};

int main() {
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};

    Solution solution;
    int newSize = solution.removeDuplicates(nums);

    std::cout << "New Size: " << newSize << std::endl;

    for (int i = 0; i < newSize; i++) {
        std::cout << "Element: " << nums[i] << std::endl;
    }

    return 0;
}
