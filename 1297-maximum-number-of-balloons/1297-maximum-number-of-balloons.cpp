class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int>  cnt_text;
        for(char ch : text){
            cnt_text[ch]++;
        }

        string target = "balloon";
        unordered_map<char, int> cnt_trgt;
        for(char ch : target){
            cnt_trgt[ch]++;
        }

        int ans = INT_MAX;
        for(auto [ch, cnt] : cnt_trgt){
            ans = min(ans, cnt_text[ch] / cnt);
        }
        return ans;
    }
};