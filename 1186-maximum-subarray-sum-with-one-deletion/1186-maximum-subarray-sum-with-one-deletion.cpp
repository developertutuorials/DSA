class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        int no_del=nums[0];
        int one_del =0;
        int res = nums[0];
        for(int i =1;i<n;i++){
            int prev_no_del =no_del;
            no_del = max(nums[i],nums[i]+no_del);
            one_del=max(prev_no_del,one_del+nums[i]);
            res=max(res,max(no_del,one_del));
        }
        return res;
    }
};