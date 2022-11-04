
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(auto i=map.begin();i!=map.end();i++){
            s.insert(i->second);
        }
        return s.size()==map.size()?true:false;
    }
};


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int size = arr.size();
        int i = 0;
        sort(arr.begin(),arr.end());
        while(i<size){
            int count = 1;
            for(int j =i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            ans.push_back(count);
            i = i+count;
        }
        size = ans.size();
        sort(ans.begin(),ans.end());
        for(int i = 0;i<size-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;   
    }
};