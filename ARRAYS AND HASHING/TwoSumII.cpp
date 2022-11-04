class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int start=0;
        int end=n-1;
        while(numbers[start]+numbers[end]!=target){

            if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }
        }

        return vector<int>{(start+1),(end+1)};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=numbers.size();
//         vector<int>res;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(numbers[i]+numbers[j]==target){
//                     res.push_back(i+1);
//                     res.push_back(j+1);
//                 }
//             }
//         }
//         return res;
//     }
// };