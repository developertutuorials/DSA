class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        n = len(nums)
        my_set=set()
        for i in range(n):
            if nums[i] in my_set:
                return True
            else:
                my_set.add(nums[i])
        
        return False