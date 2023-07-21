class Solution {
public:
    int pivotInteger(int n) {
      int data = (n * (n+1)) / 2  ;
      int sum = 0;

      for(int i = n; i>0; i--){
          sum += i;
          if(sum == data)return i;
          data -= i;
      }
      return -1;
    }
};
