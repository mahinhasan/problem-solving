#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int fst,lst;
    while(cin >> fst >> lst){
    int copyfst = fst;
    int copylst = lst;
    if(fst > lst)
        swap(fst,lst);
    int result = 0;
    int len ;
    for(int i = fst; i <= lst; i++){
        unsigned int n = i;
        len = 1;
        while (n != 1)
        {
            if( n %2 == 1)n = 3*n+1;
            else n /= 2;
            len++;
        }
        if(len > result)
            result = len;
        
    }
    cout << copyfst<<" "<<copylst<<" "<<result<<endl;
    
    }
    return 0;


    
}