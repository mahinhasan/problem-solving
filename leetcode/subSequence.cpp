#include <bits/stdc++.h> 
using namespace std;
vector<string> subsequences(string str){
	int n = str.length();
	vector<string>res;
	for(int i = 0 ; i < (1 << n); i++){
		string subset;
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
				subset += str[j];
			}
		}
		if (!subset.empty()) {
            res.push_back(subset);
        }
	}
	return res;
	
}
