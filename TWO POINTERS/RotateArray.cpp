class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int>res(nums);
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=res[i];
        }
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//          if ((n == 0) || (k <= 0) || (k%n == 0))
//         {
//             return;
//         }
//         int start=n-k;
//         vector<int>res(nums);
//         // for(auto &a:nums)res.push_back(a);
//         int begin=0;
//         for(int i=0;i<k;i++){
//             nums[i]=res[start];
//             start++;
//         }
//         for(int i=k;i<n;i++){
//             nums[i]=res[begin];
//             begin++;
//         }
//     }
// };