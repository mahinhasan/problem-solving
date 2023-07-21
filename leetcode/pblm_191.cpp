// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         return (__builtin_popcount(n));
//     }
// };


#include<bits/stdc++.h>
using namespace std;
int hamminWeight(uint32_t n){
    int count = 0;
    while(n != 0){
        if(n & 1){
            count++;
        }
        n  = n >> 1;
    }
    return count;
}


int main(){
    cout << hamminWeight(0000001) << endl;
}