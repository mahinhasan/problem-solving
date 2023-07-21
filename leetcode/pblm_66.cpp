#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        bool flag = 0;
        for(int i = n-1 ;i>=0;i--){
            if(s[i]!=' '){
            count++;
            flag = 1;
            }
           else {
               if(flag==1)
                   break;
         }

        }

        return count;
    }
};
int main(){
    // vector<int> data = {1,2,3};
    // stack<int> r;
    // int res = 0;
    // for(int i = 0;i<data.size();i++){
    //     res =(res * 10)+ data[i];
    // }
    // // cout <<res <<endl;
    // int x;
    // res = res + 1;
    // // cout <<res<<endl;
    // while(res !=0){
    //     x = res % 10;
    //     r.push(x);
    //     res = res / 10;
    // }

    // //    while (!r.empty()) {
    // //     cout << r.top() <<" ";
    // //     r.pop();
    // // }
    // // for(int i = 0;i<r.size();i++)
    // //     cout << r[i] << endl ;


 



}