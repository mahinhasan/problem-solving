#include<bits/stdc++.h>
using namespace std;
int main(){
  //freopen("input.txt","r",stdin);
  string s;
  int a,b,n,co = 1;
  int ma,mi;
  bool ch;
  while(cin >> s >> n){
  cout << "Case "<<co++<<":"<<endl;
   
  
  while(n--){
    
  cin >> a >> b;
 
  //if(a ==0 && b == 0)break;
  
  ma = max(a,b);
  mi = min(a,b);
  ch = true;
  //cout << ma << " " << mi <<endl;
  for(int i = mi ;i< ma;i++){
    if(s[i] != s[i+1])
      ch = false;
   
  }
  
  if(ch)cout << "Yes" <<endl;
  else cout <<"No" << endl;
    }
     //ma = 0,mi =0,ch = true;
   // if(a ==0 && b == 0)break;
   
  }
return 0;
}