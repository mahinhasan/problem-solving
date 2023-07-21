class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int first = 0;
        int end = nums.size() - 1;
        int mid = first + (end - first) / 2;

        while(first < end){
            if(nums[mid] < nums[mid + 1]){
                first = mid + 1;
            }
            else{
                end = mid;
            }
            mid = first + (end - first) / 2;
        }
        return first;
  
    }
};
