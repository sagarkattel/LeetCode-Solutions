class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x1=0,x2=0;
        for(int i=0;i<n;i++){
            x1=x1^nums[i];
            x2=x2^(i+1);
        }
        return x1^x2;
    }
};

// BIT MINUPLUALTION
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x1=0;int x2=0;
        for(int i=0;i<n;i++){
            x1=x1^nums[i]; // let say array is 3,0,1 then x1 will store  3^0^1 
            x2=x2^(i+1);     // here x2 will store 1^2^3
        }
        return x1^x2;//  a^a=0 ,so the number present both in x1 and x2 will cancel out(become zero ) and the element which is not present in x1 . i.e 2 will be returned by the function.
    }
};

// Using HashSet
// Space Complexity:O(n)
// Time COmplexity: O(n)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=0;i<=n;i++){
            if(!s.count(i))return i;
        }
        return -1;
    }
};

// Using Sorting
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
           if(i!=nums[i])return i;
       }
       return n;
    }
};

// Using Binary Search
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(mid==nums[mid])start=mid+1;
            else end=mid-1;
        }
        return start;
    }
};