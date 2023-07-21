#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
    char str[1234];
    char c;
    while(cin >> str){
        for(int i = 0; str[i]!='\0';i++){
            c = str[i]-7;
            cout <<c;
        }
        cout<<endl;
    }
    return 0;
}