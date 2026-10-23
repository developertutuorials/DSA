class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        n = len(nums)
        mp={}
        for i in range(n):
            if nums[i] in mp:
                mp[nums[i]]=mp.get(nums[i],0)+1
                if mp.get(nums[i],0)>n/2:
                    return nums[i]

            else:
                mp[nums[i]]=mp.get(nums[i],0)+1
        return nums[i]
        