class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int minPrice = prices[0];

        for(int i = 0; i < n; i++){
            if(prices[i] > minPrice){
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }
};