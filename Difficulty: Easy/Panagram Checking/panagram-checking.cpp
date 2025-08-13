class Solution {
  public:
    bool checkPangram(string& s) {
        //  code here
        int n = s.size();
        for(char ch = 'a'; ch <= 'z'; ch++){
            bool found = false;
            for(int i = 0;i < n; i++){
                if(ch == tolower(s[i])){
                    found = true;
                    break;
                }
            }
            if(found == false){
                return false;
            }
        }
        return true;
    }
};