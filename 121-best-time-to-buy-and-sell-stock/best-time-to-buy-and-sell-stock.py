class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        minPrice = prices[0]
        n = len(prices)
        for i in range(n):
            if prices[i] > minPrice:
                maxProfit = max(maxProfit,prices[i] - minPrice)
            else:
                minPrice = min(minPrice, prices[i])
        return maxProfit