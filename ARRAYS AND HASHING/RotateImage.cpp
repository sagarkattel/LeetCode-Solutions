
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans=matrix;
        int n=ans.size();
        for(int i=0;i<n;i++){
            int k=n-1;
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[k][i];
                k--;
            }
        }
    }
};