class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        totalProfit = 0
        n = len(prices)
        for i in range(1, n):
            if prices[i] > prices[i - 1]:
                totalProfit += prices[i] - prices[i - 1]
        return totalProfit
