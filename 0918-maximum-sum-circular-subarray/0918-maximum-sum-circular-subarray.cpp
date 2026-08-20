class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int be_maxe =nums[0];
        int be_mine =nums[0];
        int total =nums[0];
        int ans_1 = nums[0];
        int ans_2 = nums[0];
        int res;
        for(int i =1;i<n;i++){
            int c1 = be_maxe +nums[i];
            int c2 = be_mine + nums[i];
            int c3 = nums[i];
            total+=nums[i];
            be_maxe = max(c1,c3);
            be_mine = min(c2,c3);
            ans_1 = max(ans_1,be_maxe);
            ans_2 = min(ans_2,be_mine);
        }
        if(ans_1<0)return ans_1;
        res = max(ans_1,total-ans_2);
        return res;
    }
};