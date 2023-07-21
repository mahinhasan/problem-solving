#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int main(){
    freopen("myfile.txt","r",stdin);
    string s,s1;
    

    char ch;

    char ch1 = 'a';

    int k = (int)ch1,m;

   while(getline(cin , s),getline(cin , s1)){
       int a1[MAX] = {0};

    int a2[MAX] = {0};
    int m = s.size();
    int n = s1.size();
               for(int i = 0;i<m;i++)

            a1[(int)s[i]]++; 

        for(int i = 0;i<n;i++)
            a2[i]= (int)s1[i];
        sort(a2,a2+n);
        for(int i = 0; i <n; i++){
            if(a1[a2[i]]){
                cout << (char)a2[i];
                a1[a2[i]]--;
            }
        }
        cout << endl;
        s.clear(),s1.clear();
   }
   
   return 0;
    
}
