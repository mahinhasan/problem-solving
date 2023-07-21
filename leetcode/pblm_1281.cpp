class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int products = 1;
        long long int sumOfValue = 0;

        int val = n;
        while(val>0){
            int num = val % 10;
            products =products * num;
            sumOfValue += num;
            val /= 10;

        }
        int res = (products - sumOfValue);
        return res;
    }
};