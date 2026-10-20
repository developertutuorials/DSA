class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        n = len(nums)
        res=0
        map={}
        map[0]=1
        summ=0
        for i in range(n):
            summ+=nums[i]
            ques = summ-k
            freq=map.get(ques,0)
            res+=freq
            map[summ]=map.get(summ,0)+1
        return res