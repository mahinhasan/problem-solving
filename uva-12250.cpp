#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    string str;
    int ca = 1;
    while(cin>>str){
        if(str =="#")break;
        else if(str == "HELLO")
            cout << "Case "<<ca++<<": "<<"ENGLISH"<<endl;
        else if(str == "HOLA")
            cout << "Case "<<ca++<<": "<<"SPANISH"<<endl;
        else if(str == "HALLO")
            cout << "Case "<<ca++<<": "<<"GERMAN"<<endl;
        else if(str == "BONJOUR")
            cout << "Case "<<ca++<<": "<<"FRENCH"<<endl;
        else if(str == "CIAO")
            cout << "Case "<<ca++<<": "<<"ITALIAN"<<endl;
        else if(str == "ZDRAVSTVUJTE")
            cout << "Case "<<ca++<<": "<<"RUSSIAN"<<endl;
        
        else
            cout << "Case "<<ca++<<": "<<"UNKNOWN"<<endl;
        
        
        
    }
    return 0;
}