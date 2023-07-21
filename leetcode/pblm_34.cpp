class Solution {
public:


int first_element(vector<int>& nums,int element){
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end - start)/2;
    int res = -1;
    while(start <= end){
        if(nums[mid] == element){
            res = mid;
            end = mid - 1;
        }
        else if(element > nums[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start )/ 2;
    }
    return res;


}
int last_element(vector<int>& nums,int element){
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end - start)/2;
    int ans = -1 ;
    while(start <= end){
        if(nums[mid] == element){
            ans =  mid;
            start = mid + 1;
        }
        else if(element > nums[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start )/ 2;
    }
    return ans;
}


    vector<int> searchRange(vector<int>& nums, int target) {
        int res = first_element(nums,target);
        int ans = last_element(nums,target);
        return {res,ans};
    }
};
