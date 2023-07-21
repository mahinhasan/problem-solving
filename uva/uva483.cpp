#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    while(getline(cin ,s)){
    istringstream iss(s);
    string s2;
    bool condition = false;
     while(iss>>s) {
            if(condition) cout<<" ";
            condition = true;
            for(int i = s.size() - 1; i >= 0; i--) cout<<s[i];
        }
        cout<<endl;
        s.clear();
    }
    return 0;

}