#include<bits/stdc++.h>
using namespace std;

void minimizedStringLength(string& s) {
        vector<char> str;

        for(int i = 0; i<s.length() + 1;i++){
            char ch = s[i];
            if(ch == s[i+1] || ch == s[i+2] )continue;
            else
                str.push_back(ch);
        }
        cout << str.size();
    }

    int main(){
        string s = "dddaaa";
        minimizedStringLength(s);
        cout << s <<endl;
    }