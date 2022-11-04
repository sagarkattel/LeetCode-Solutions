class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closeSum=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(abs(target-closeSum)>abs(target-(nums[i]+nums[j]+nums[k]))){
                        closeSum=nums[i]+nums[j]+nums[k];
                    }
                }
            }
        }
        return closeSum;
    }
};



//Using Two Pointers

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            int start=i+1;
            int end=n-1;
            while(start<end){
                int num=nums[i]+nums[start]+nums[end];
                if(abs(num-target)<abs(res-target)){
                    res=num;
                }
                    if(num<target)start++;
                else end--;
            }
        }
        
        
        return res;
    }
};