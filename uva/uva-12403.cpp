#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,input,money = 0;
    string s;
    cin >>n;
    while(n--){
        cin >> s ;
        if(s == "donate"){
            cin >> input;
              money+=input;
        }
        else
            cout << money <<endl;
    }
    return 0;
}