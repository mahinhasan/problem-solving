#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int t,n,co = 1;
    string s;
    vector <int> v,k;
    vector <string> str;
    cin >> t;
    while(t--){
        for(int i = 0; i<10; i++){
            cin >> s >> n;
            str.push_back(s);
            v.push_back(n);
            n = *max_element(v.begin() , v.end());
            
        }
        for(int  i= 0;i<v.size();i++){
                if(n == v[i])
                //cout << v[i] << endl;
                    k.push_back(i);

            }
            n = 0;
            cout << "Case #"<<co++<<":"<<endl;
            for(int i =0;i<k.size();i++)
                cout << str[k[i]] << endl;
            //cout << t << endl;
        // for( int j = 0; j<k.size();j++)
        //     cout << str[j] <<endl;
    
        v.clear();
        k.clear();
        str.clear();
        
        
    }
    return 0;
}