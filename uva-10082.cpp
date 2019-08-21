#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("input.txt","r",stdin);
    string s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./\n\n";

    string sr;
    while(getline(cin ,sr)){
 
        for(int i =0; i<sr.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(sr[i]==s[j])
                {
                    sr[i]=s[j-1];
                    break;
                }
            }
        }
        cout << sr <<endl;}
    return 0;
}