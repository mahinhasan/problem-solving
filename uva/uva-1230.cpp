#include<bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,m;
  int n;
  cin >> n;
  while(n--){
  cin >> a >> b >> m;
  long long res = 1;

  while(b>0){
    if(b & 1)
        res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  cout << res << endl;
  }
  return 0;
}