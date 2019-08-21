#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int co = 1;
    while(cin >> s){
        if(s == "*")break;
        else
        {
            if(s == "Hajj")
                cout <<"Case "<<co++<<": Hajj-e-Akbar"<<endl;
            else 
                cout <<"Case "<<co++<<": Hajj-e-Asghar"<<endl;

        }
        
    }
    return 0;
}