#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int co = 0;
    while (getline(cin ,s))
    {
    for(int i = 0 ;i<s.size();i++){
        if(isalpha(s[i]) && !isalpha(s[i+1]))
            co++;
    }
    cout<< co<<endl;
    co = 0;
    }
    return 0;

}