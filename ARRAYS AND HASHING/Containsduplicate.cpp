//Check if it contains duplicate using Set

//Leetcode solutions


class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> s;
        for (auto a : nums)
            s.insert(a);
        if (nums.size() == s.size())
            return false;
        return true;
    }
};

//Check if it contains duplicate using map

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int,int>m;
        for(auto a:nums)m[a]++;
        for(auto a:m){
            if(a.second>1)return true;
        }
        return false;
    }
};