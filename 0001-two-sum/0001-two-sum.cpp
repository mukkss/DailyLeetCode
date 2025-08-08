class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int comp = target - nums[i];
            if(hashMap.find(comp) != hashMap.end()){
                return {hashMap[comp], i};
            }
            hashMap[nums[i]] = i;
        }
        return {};
    }
};