class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        int n = s.size();
        int ones = 0;
        
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                ones++;
            }
        }
        
        return (ones * (ones - 1))/2;
    }
};