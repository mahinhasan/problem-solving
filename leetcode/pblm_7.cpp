#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0){
            int num = x % 10;
            if((rev>INT_MAX/10) || (rev<INT_MIN/10) ){
                return 0;
            }
            rev = (rev * 10) + num;
            x = x / 10;
            }
        return rev;
    }
};
int main(){
    
    

}