#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}


void reverseArray(string& s,int i,int j){
    
   while (i < j){
    while(i < j && !isVowel(s[i])) i++;
    while(i < j && !isVowel(s[j])) j--;
    if(i < j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
   
   }

    // if(i > j)
    //     return ;
    // swap(s[i],s[j]);
    // i++;
    // j--;
    // return reverseArray(s,i,j);

}

int main(){
    string s = "mahine";
    reverseArray(s,0,s.length()-1);
    cout << s <<endl;
}