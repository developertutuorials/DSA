
class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        n=len(nums)
        mul=1
        zero_count=0
        res=[]
        for i in range(n):
            if nums[i]==0:
                zero_count+=1
            else:
                mul*=nums[i]
        for i in range(n):
            if zero_count >1:
                res.append(0)
            elif zero_count==1:
                if nums[i]==0:
                    res.append(mul)
                else:
                    res.append(0)
            else:
                res.append(mul//nums[i])
        return res
        
        