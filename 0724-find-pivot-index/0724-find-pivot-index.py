class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        n=len(nums)
        left =0
        summ=sum(nums)
        for i in range(0,n):
            right=summ-nums[i]-left
            if left==right:
                return i
            left+=nums[i]
        return -1