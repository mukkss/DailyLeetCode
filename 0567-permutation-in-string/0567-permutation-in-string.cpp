class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if(n1 > n2) return false;

        unordered_map<char, int> need, window;
        for(char c : s1){
            need[c]++;
        }

        for(int i = 0; i < n1; i++){
            window[s2[i]]++;
        }
        if(window == need) return true;

        for(int i = n1; i < n2; i++){
            window[s2[i]]++;
            char remove = s2[i - n1];
            window[remove]--;
            if(window[remove] == 0){
                window.erase(remove);
            }
            if(window == need){
                return true;
            }
        }
        return false;

    }
};