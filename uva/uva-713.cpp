#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    string s,s1,res;
    int n;
    cin >> n;
    while(n--)
    {
    cin >> s >> s1;
    reverse(s.begin(),s.end());
    reverse(s1.begin(),s1.end());

    long long n,n1;
    istringstream ss(s);
    ss>>n;
    istringstream iss(s1);
    iss>>n1;
    
    int result = n+n1;
    res = to_string(result);
    reverse(res.begin(),res.end());
    long long l;
    istringstream ssp(res);
    ssp>>l;
    cout << l << endl;
    }
    return 0;
}