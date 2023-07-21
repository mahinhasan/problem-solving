class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> data(n);
        int count  = 0;
        data.push_back(count);
        for(int i = 1; i<=n; i++ ){
            int j = i;
            while(j != 0){
                j &= (j - 1);
                count++;
            }
            data[i] = (count);
            count = 0;
        }
        return data;
    }
};
