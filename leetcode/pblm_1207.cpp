#include<bits/stdc++.h>
using namespace std;
bool unique(vector<int> arr,int n){
        std::unordered_set<int> si;

	for (const auto& n : arr)
		if (!si.insert(n).second)
			return true;

	return false;
}


int main(){
    vector<int>v,res;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);

    for(auto i : v){
        cout << i <<endl;
    }
    // int arr[6] = {1,2,3,2,4,2};
    map<int,int> m;
    // int n = sizeof(arr)/sizeof(int);
    int n = v.size();
    for(int i = 0;i<n;i++){
        m[v[i]]++;
    }
    cout <<"Map print: "<<endl;

    for(auto i:m){
        cout << i.first <<" => "<<i.second<<endl;
    }

    cout << "Insert"<<endl;
    for(auto it : m){
        res.push_back(it.second);
    }

    bool u = unique(res,res.size());

   if(u){
    cout << "True";

   }
   else{
    cout <<"False"<<endl;
   }
}