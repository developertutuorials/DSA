class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
       
        int ans = nums[0];
        int mini=nums[0];
        int maxi =nums[0];
        for(int i =1;i<n;i++){
            int c1 = mini* nums[i];
            int c2 =maxi *nums[i];
            int c3 = nums[i];
            maxi = max(c3,max(c1,c2));
            mini = min(c3,min(c1,c2));
            ans = max(ans,max(maxi,mini));
        }
        return ans;
    }
};