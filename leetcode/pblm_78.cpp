#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int x = (1 << n);

    for(int i = 0; i < x; ++i){
        for(int j = 0; j<n; j++){
            if (i & (1 << j)){
                cout << (i &(1 << j))<<endl;
            } 
        }
    }
    cout << x <<endl;
}