//Checks if he given 2 strings are valid anagram or not Using sortting

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};

//Here time complexity is O(nlogn)


//Checks if he given 2 strings are valid anagram or not Using hashmap

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>Map;
        for(int i=0;i<s.length();i++){
            Map[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            if(Map.find(t[i])!=Map.end()){
                Map[t[i]]-=1;
            }
        }
        for(auto items:Map){
            if(items.second>0) {
                return false;
            }
        }
            return true;
    }
};

// Here time complexity is O(n)