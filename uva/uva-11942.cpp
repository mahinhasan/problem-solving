#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int t,n,x,arr[10],count1 = 0,count = 0;
    bool result;
    vector < int > v;
    cin >> t;
    cout << "Lumberjacks:"<<endl;
    while(t--){
        for(int i = 0 ; i<10; i++){
            cin >> arr[i];
            // arr1[i] = arr[i];
        }
        if(arr[0]>arr[1] && arr[1]>arr[2] && arr[2]>arr[3] && arr[3]>arr[4] && arr[4]>arr[5] && arr[5]>arr[6] && arr[6]>arr[7] && arr[7]>arr[8] && arr[8]>arr[9])
            cout << "Ordered"<<endl;
        else if(arr[0]<arr[1] && arr[1]<arr[2] && arr[2]<arr[3] && arr[3]<arr[4] && arr[4]<arr[5] && arr[5]<arr[6] && arr[6]<arr[7] && arr[7]<arr[8] && arr[8]<arr[9])
            cout << "Ordered"<<endl;
        else 
            cout <<"Unordered"<<endl;
        
        // result = is_sorted(arr, arr+10);
        // if(result == true)
        //     cout << "Ordered" << endl;
        // else
        //     cout <<"Unordered" << endl;

        // for(int i = 0;i<10; i++){
        //     if(arr[i] >= arr[i+1])
        //         count++;
        //     else if(arr[i] <= arr[i+1])
        //         count1++;
        // }
        // cout <<count<<" "<<count1<<endl;
        // if(count == 9 || count1 == 9)
        //     cout<<"Ordered"<<endl;
        // else
        //     cout << "Unordered"<<endl;
        // count = 0;
        // count1 = 0;
        // sort(arr1,arr1+10);

        // for(int i = 0; i<10 ;i++){
        //     if(arr1[i] == arr[i])
        // }
       
    }
    return 0;
}