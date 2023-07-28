#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        std::unordered_map<int, int> memo; // unordered_map to store computed results

        return climb(n, memo);
    }

private:
    int climb(int n, std::unordered_map<int, int>& memo) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        if (memo.find(n) != memo.end()) {
            return memo[n];
        }

        // Calculate and memoize the result
        int ans = climb(n - 1, memo) + climb(n - 2, memo);
        memo[n] = ans;
        return ans;
    }
};

int main() {
    Solution solution;
    int result = solution.climbStairs(5);
    cout << result << endl; // Output will be 8 for n=5

    return 0;
}