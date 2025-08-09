class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hasp;
        for(int num : nums){
            if(hasp[num] >= 1){
                return true;
            }
            hasp[num]++;
        }
        return false;
    }
};