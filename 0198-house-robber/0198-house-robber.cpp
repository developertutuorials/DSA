class Solution {
public:

    int fun(vector<int> &nums,int n,int idx,int free,vector<vector<int>> &dp){
        // Base Case
        if(idx==n){
            return 0;
        }
        if(dp[idx][free]!=-1){
            return dp[idx][free];
        }
        if(free ==0){
            return dp[idx][free] = fun(nums,n,idx+1,1,dp);
        }
        int c1 =nums[idx] +fun(nums,n,idx+1,0,dp);
        int c2 = fun(nums,n,idx+1,1,dp);
        return dp[idx][free] = max(c1,c2);

    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n);
        for(int i =0;i<n;i++){
            vector<int> t(2,-1);
            dp[i]=t;

        }
        return fun(nums,n,0,1,dp);
   
    }
};