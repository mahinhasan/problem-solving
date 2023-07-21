#include<bits/stdc++.h>
using namespace std;
int digit(long long n){
    long sum;
    for(sum = 0; n>0; sum+= n%10,n/=10);
    return sum;
}
int num(long long a,long long b){
    return(digit(a)+digit(b)-digit(a+b))/9;
}
int main(){
   //freopen("input.txt","r",stdin);
    long long a,b;
    long long c;
    
    while(cin >> a >> b){
        if(a ==0 && b ==0)break;
        c = num(a,b);
        if(c == 0)
        cout << "No carry operation."<<endl;
        else if(c ==1)
        cout << c << " carry operation." <<endl;
        else
        {
            cout << c << " carry operations."<<endl;
        }

        //c =0;
    }
  //cout << num(555,555) <<endl;
  return 0; 
}