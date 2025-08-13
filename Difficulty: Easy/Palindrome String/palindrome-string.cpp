class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n = s.size();
        int left = 0;
        int right = n - 1;
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};