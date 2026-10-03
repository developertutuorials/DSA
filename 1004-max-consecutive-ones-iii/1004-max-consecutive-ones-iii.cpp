class Solution {
public:

    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low =0;
        int high =0;
        int ans = INT_MIN;
        int zeros=0;
        for(high;high<n;high++){
            if(nums[high]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[low]==0){
                    zeros--;
                }
                low++;
            }
            int len =high-low+1;
            ans=max(ans,len);
        }
        return (ans ==INT_MIN)?0:ans;
        
    }
};