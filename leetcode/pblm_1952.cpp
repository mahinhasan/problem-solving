class Solution {
public:
    bool isThree(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                count++;
 
            else
                count = count + 2;
        }
    }
    if(count == 3)
        return true;
    else

        return false;
    }
};
