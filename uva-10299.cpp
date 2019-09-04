/**
    Mehedi hasan Mahin
    cs-17 aiub
    Uva-10179 solving
    Help: Euler totient function using
    Link:https://en.wikipedia.org/wiki/Euler%27s_totient_function
    @author Mahin
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    long long n;
    
    while(cin >> n){
        if(n ==0)break;
        if(n == 1)cout << "0" << endl;
        else{
    long long res = n;
    for(int i = 2; i*i <= n;++i)
        if(n % i ==0){
            while(n %i ==0)
                n /= i;
            res -= res/i;
        }
    if(n>1)
        res -= res/n;
   
    cout << res << endl; 
    }
    }
    return 0;
}