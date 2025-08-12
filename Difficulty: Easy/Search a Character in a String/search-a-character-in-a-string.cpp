// User function Template for C++
class Solution {
  public:

    // Function to search for a character in the string
    int searchCharacter(string &s, char ch) {
        // code here
        int n = s.length();
        
        for(int i = 0; i < n; i++){
            if(s[i] == ch){
                return i;
            }
        }
        return -1;
    }
};
