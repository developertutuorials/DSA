import math
class Solution:
    def per_hour_speed(self,piles: list[int],guess:int)->int:
        hour=0
        s=len(piles)
        for i in range(s):
            hour += math.ceil(piles[i]/guess)
        return hour

    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        n=len(piles)
        low=1
        high=max(piles)
        while(low<=high):
            guess=low+(high-low)//2
            if self.per_hour_speed(piles,guess)<=h:
                high=guess-1
            else:
                low=guess+1
        return low


        