class Solution {
  public:
      double myPow(double x, int n) {
          long m=n;
          if(n==0)return 1;
          return x*pow(x,m-1);
      }
  };