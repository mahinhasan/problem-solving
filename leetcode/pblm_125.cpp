#include<bits/stdc++.h>
using namespace std;

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
        return 1;
    } 
    return 0;
}

char toLower(char ch){
    if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrom(string s){
    int m = 0;
    int n = s.length() - 1;

    while(m < n){
        if(s[m] != s[n]){
            return 0;
        }
        else{
            m++;
            n--;
        }

    }
    return 1;
}


int main(){
    string s = "0P";
    string temp = "";
    for(int j = 0; j<s.length(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    cout << temp <<endl;
    for(int i = 0;i<temp.length();i++){
        temp[i] = toLower(temp[i]);
    }
    cout << temp<<endl;
    cout << checkPalindrom(temp) << endl;

}