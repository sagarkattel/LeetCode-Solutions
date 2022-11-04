class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        vector<char>res(s);
        int end=n-1;
        for(int i=0;i<n;i++){
            s[i]=res[end];
            end--;
        }
        
    }
};