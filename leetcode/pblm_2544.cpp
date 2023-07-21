class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int > res;
        int sum = 0;
        while( n > 0){
            res.push_back(n % 10);
            n = n / 10;
        }
        reverse(res.begin(), res.end());


        for(int i = 0; i<res.size(); i++){
            if(i % 2 ==0){
                sum += res[i];
            }
            else{
                sum += -res[i];
            }
        }
        return sum;
    }
};
