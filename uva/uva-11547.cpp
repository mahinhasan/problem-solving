#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;

    while(t--){
        cin >> n;
        int x = n*567;
        int y = x/9;
        int z = y+7492;
        int a = z*235;
        int b = a/47;
        int c = b-498;
        int d = c%100;
        cout <<abs(d/10 )<<endl;
    }
    return 0;
}