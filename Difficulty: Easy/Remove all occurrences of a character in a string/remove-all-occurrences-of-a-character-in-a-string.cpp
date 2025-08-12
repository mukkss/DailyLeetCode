// User function Template for C++
class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        // code here
        int n = s.length();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != c){
                s[j++] = s[i];
            }
        }
        s.resize(j);
    }
};