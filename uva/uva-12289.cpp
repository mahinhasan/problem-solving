#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    string s;
    int n,c = 0;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size()>3){
            cout<<"3"<<endl;
        }
        else{
            
            if((s[0] == 'o'&& s[1]=='n')||(s[0] =='o'&& s[2] == 'e')|| (s[1] == 'n'&& s[2] == 'e'))
                cout << "1"<<endl;
            else
                cout <<"2" <<endl;
                        
        }
    }
    return 0;
}