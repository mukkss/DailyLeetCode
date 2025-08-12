// User function Template for C++

class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
        // code here
        int n = s.size();
        bool next = false;
        string res;
        
        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                next = true;
            }
            else if(next == true){
                res += toupper(s[i]);
                next = false;
            }
            else{
                res += s[i];
            }
        }
        return res;
    }
};
