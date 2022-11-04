class Solution {
public:
    string reverseWords(string s) {
        int lastSpaced=-1;
        int len=s.length()-1;
        for(int strIndex=0;strIndex<len;strIndex++){
            if(strIndex==len|| s[strIndex]==" "){
                int strbegin=lastSpaced+1;
                int strend=strIndex;
                while(strbegin<strend){
                    char temp=s[strbegin];
                    s[strbegin]=s[strend];
                    s[strend]=temp;
                    strbegin++;
                    strend--;
                }
                lastSpaced=strIndex;
            }
        }
        return s;
    };
};