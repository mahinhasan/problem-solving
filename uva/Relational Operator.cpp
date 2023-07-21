#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define READ() freopen("in.txt", "rt", stdin)

int main() {
    ll testCase, a, b;

    cin >> testCase;

    while(testCase--) {
        cin >> a >> b;

        if(a < b) cout << "<" << endl;
        else if (a > b) cout << ">" << endl;
        else cout << "=" << endl;
    }

    return 0;
}
