#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    string s;
    while(n--){
        cin >>s ;
        if(s[s.size()-1] == '5'&& s[s.size()-2] == '3')
            cout << "-"<<endl;
        else if(s[0] == '1'&& s[1] == '9' && s[2] == '0')
            cout << "?"<<endl;
        else if(s[0] =='9'&& s[s.size()-1] == '4')
            cout << "*"<<endl;
        else 
            cout << "+"<<endl;
    }
    return 0;
}