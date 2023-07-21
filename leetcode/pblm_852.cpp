class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int first = 0;
        int end = arr.size() - 1;
        int mid = first + (end - first) / 2;

        while(first < end){
            if(arr[mid] < arr[mid + 1]){
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
