class Solution {
  public:
      bool isPalindrome(int x) {
          double sum=0;
          int b=x;
          if(b<0) return false;
          while(x!=0){
              int n=x%10;
              sum=sum*10+n;
              x=x/10;
          }
          if(sum==b){
              return true;
          }
          else return false;
      }
  };