class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(const auto& num: nums){
            count[num]++;
        }

        vector<vector<int>> freq(nums.size() + 1);
        for(auto&p:count){
            freq[p.second].push_back(p.first);
        }

        vector<int> result;
        for(int i = freq.size() - 1; i > 0; --i){
            for(int n : freq[i]){
                result.push_back(n);
                if(result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};