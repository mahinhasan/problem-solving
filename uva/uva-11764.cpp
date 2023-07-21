#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int t,n,x,co1 = 0,co = 0,count = 1;
    vector < int > v;
    cin >> t;
    while(t--){
        cin >> n;
        while(n--){
            cin >> x;
            v.push_back(x);

        }
        for(int i = 0;i<v.size()-1;i++){
            if(v[i] >v[i+1])
                co++;
            else if(v[i]<v[i+1])
                co1++;
            //cout << v[i] << " ";
        }
        cout <<"Case "<<count++<<": "<<co1 <<" "<<co <<endl;
        co = 0;
        co1 = 0;

        //cout << endl;
        v.clear();
    }
    return 0;
}