#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int res;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                res =  mid;
            }
            else if(nums[mid] < target){
                mid = mid + 1;
                if(target < nums[mid]){
                    res = mid;
                }
            }
            else{
                mid = mid - 1;
                if(target > nums[mid]){
                    res = mid + 1;
                }
            }
        }
        return res;
}

int main(){
    vector<int>nums = {1,3,5,6};
    int  target = 5;
    int res = searchInsert(nums,target);
    cout << res;
}
