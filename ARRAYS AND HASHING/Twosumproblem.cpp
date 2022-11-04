
//Two sum problem of leetcode Using Bruteforce

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int len = nums.size();
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if(nums[j] == target - nums[i])
                return { i, j };
        }
    }
    return {-1, -1};
}
};

//Two sum problem of leetcode Using Two pointer

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int front=0,rear=n-1;
        int sum;
        while(front<rear){
            sum=nums[front]+nums[rear];
            if(sum==target){
                break;
            }
            else if(sum>target){
                rear--;
            }
            else{
                front++;
            }
        }
        return{front,rear};
}
    
};

//Two sum problem of leetcode Using Hash Table

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>Map;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int complement=target-nums[i];
            if(Map.find(complement)!=Map.end()){
                ans.push_back(Map.find(complement)->second);
                ans.push_back(i);
                return ans;
            }
            Map.insert(pair<int,int>(nums[i],i));
        }
        return ans;
}
};

// Time complexity : O(n) Space Complexity:O(n)