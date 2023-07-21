#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int t,n,x;
    int min;
    int max;
    vector < int > v;
    cin >> t;
    while(t--){
        cin  >>n;
        max = 0;
        min = 0;
        while(n--){
            cin >> x;
            v.push_back(x);
        }
         min = *min_element(v.begin(),v.end());
         max = *max_element(v.begin(), v.end());
         v.clear();
       
       cout << (max-min)*2<<endl;
    }
    return 0;
}