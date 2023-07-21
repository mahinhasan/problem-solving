#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
   int countDigits(int num) {
        int ans = 0;;
        int n = num;
        while(n > 0){
            int r = n%10;
            if(num % r == 0) ans++;
            n = n/10;
        }
        return ans;
    }
int main() {
   cout << countDigits(123)<< endl;
}