class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> curr;
        for(const auto&s : strs){
            string key = s;
            sort(key.begin(), key.end());
            curr[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& pair: curr){
            result.push_back(pair.second);
        }
        return result;
    }
};