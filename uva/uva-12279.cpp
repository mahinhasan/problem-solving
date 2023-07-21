#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n,x,co1 = 0,co2 = 0,c = 1;
    while(cin >> n){
    if(n==0)
        return 0;
    
    while(n--){
        cin >> x;
        if(x == 0)
            co1++;
        else
            co2++;
        }
        cout <<"Case "<<c++<<": "<<co2-co1 <<endl;
        co1 =0;
        co2 =0;
    }
    return 0;
}