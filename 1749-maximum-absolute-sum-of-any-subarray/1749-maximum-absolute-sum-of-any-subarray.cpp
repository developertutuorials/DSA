class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int be1 = nums[0];
        int be2 = nums[0];
        int ans1 = nums[0];
        int ans2 = nums[0];
        int res;
        if(n==1)return abs(nums[0]);
        for(int i =1;i<n;i++){
            int c1=be1+nums[i];
            int c3=be2+nums[i];
            int c2=nums[i];
            be1=max(c1,c2);
            be2=min(c3,c2);
            ans1 = max(ans1,be1);
            ans2 = min(ans2,be2);
            res = max(abs(ans1),abs(ans2));
        }
        
        return res;
    }
};