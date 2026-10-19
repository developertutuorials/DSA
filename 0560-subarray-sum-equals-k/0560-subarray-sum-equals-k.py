class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        n = len(nums)
        summ=0
        res=0
        mp={}
        mp[0]=1
        for i in range(n):
            summ+=nums[i]
            ques=summ-k
            freq=mp.get(ques,0)
            res+=freq
            mp[summ]=mp.get(summ,0)+1
        return res