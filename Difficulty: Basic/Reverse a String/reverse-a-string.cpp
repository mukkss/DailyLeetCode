// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.size(); 
        string res;
        for(int i = n-1; i >= 0; i--){
            res += s[i];
        }
        return res;
    }
};
