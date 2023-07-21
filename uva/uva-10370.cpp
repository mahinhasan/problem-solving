#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
    double t,n,x,co = 0,temp,sum = 0,avg;
    vector<double>v;
    cin >> t;
    while(t--){
        cin >> n;
        temp = n;
        while(n--){
            cin >> x;
            v.push_back(x);
            sum+=x;
            avg = sum/temp;

        }
        for(int i = 0;i<v.size();i++){
            //cout <<v[i]<<" ";
            if(v[i]>avg)co++;
        }
        //cout << endl;
        printf("%.3lf%\n",(co/temp)*100);
        //cout << co<<endl;
        v.clear();
        // co =0;
        avg = 0;
        sum = 0;
        co = 0;

    }
    return 0;
}