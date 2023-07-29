#include<bits/stdc++.h>
using namespace std;
 int trailingZeroes(int n) {
        if (n < 0)
            return 0;

        int count = 0;
        while (n >= 5) {
            count += n / 5;
            n /= 5;
        }
        return count;
    }  



int main(){
    int n = 15;
    int res = trailingZeroes(n);
    cout << res <<endl;
    return 0;
}