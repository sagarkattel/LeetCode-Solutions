


class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        s.erase(std::remove_if(s.begin(), s.end(), []( auto const& c ) -> bool { return !isalnum(c); } ), s.end());
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};


// OR

class Solution {
public:
    bool isPalindrome(string s) {
        // transform(s.begin(),s.end(),s.begin()::tolower);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        for (int i = 0; i < s.size(); i++) {
         
        // Finding the character whose
        // ASCII value fall under this
        // range
        if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')){
            // erase function to erase
            // the character
            s.erase(i, 1);
            i--;
        }
        }
        int start=0;
        int end=s.length()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};