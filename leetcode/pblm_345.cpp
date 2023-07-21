#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;
        double res = log(n) / log(4);
        if((int)res == res)
            return true;
        else
            return false;
    // return ((n > 0) && ((n & n - 1) == 0) && (n % 3 == 1));

    }
};

int main(){
    int x = 16;

    Solution s ;
    bool res = s.isPowerOfFour(x);
    cout << res <<endl;
}