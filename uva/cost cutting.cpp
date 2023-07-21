#include <bits/stdc++.h>
//using namespace std;

#define READ() freopen("in.txt", "rt", stdin)

int main() {

    int testcase,fst,secnd,thrd;
    std::cin >> testcase;
    for(int i=1;i<=testcase;i++){
        std::cin >> fst >> secnd >> thrd;
        if((fst < secnd && secnd < thrd ) || (thrd < secnd && secnd < fst))
            std::cout << "Case "<< i <<": " <<secnd<<std::endl;
        else if((secnd < fst && fst < thrd) || (thrd < fst && fst < secnd))
            std::cout << "Case "<< i<<": " <<fst<<std::endl;
        else
            std::cout << "Case "<<i<<": " <<thrd<<std::endl;
    }


    return 0;
}
