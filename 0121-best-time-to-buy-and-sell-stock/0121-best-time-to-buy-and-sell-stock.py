class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        n=len(prices)
        minprice=prices[0]
        maxprofit=0
        for i in range(1,n):
            if(minprice > prices[i]):
                minprice=prices[i]
            else:
                profit =prices[i]-minprice
                if(profit > maxprofit):
                    maxprofit=profit
        return maxprofit


        