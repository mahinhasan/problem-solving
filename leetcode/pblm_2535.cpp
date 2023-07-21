class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        vector<int> data;
        int sum = 0;
        for(int i = 0;i<nums.size(); i++){
            sum += nums[i];
            while(nums[i] > 0){
                data.push_back(nums[i] % 10);
                nums[i]  = nums[i] / 10;
            }
        }
        int res = 0;
        for(auto x : data){
            res += x;
        }

        return abs(sum - res);
    }
};
