class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int strt = 0;
        int end = n - 1;
        while(strt < end){
            if(!isalnum(s[strt])){
                strt++;
                continue;
            }
            else if(!isalnum(s[end])){
                end--;
                continue;
            }
            else if(tolower(s[strt]) != tolower(s[end])){
                return false;
            }
            else{

            strt++;
            end--;
            }
        }
        return true;
    }
};