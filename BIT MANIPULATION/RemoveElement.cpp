#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>nums{0,0,1,1,1,2,2,3,3,4};
    int val=2;
    for(auto i = nums.begin(); i != nums.end(); ++i){
            if(*i==val){
                nums.erase(i);
                i--;
            }
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
// OUTPUT:
// 0 0 1 1 1 3 3 4

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto i = nums.begin(); i != nums.end(); ++i){
            if(*i==val){
                nums.erase(i);
                i--;
            }
         }
        return nums.size();
    }
};