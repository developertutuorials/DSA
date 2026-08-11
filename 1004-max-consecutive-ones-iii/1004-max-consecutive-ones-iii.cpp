class Solution {
public:

    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low=0;
        int high=0;
        int res = INT_MIN;
        vector<int> f(256,0);
        for(high=0;high<n;high++){
            f[nums[high]]++;
            int len = high-low+1;
          
            int diff=f[0];
            while(diff>k){
                f[nums[low]]--;
                low++;
                len=high-low+1;
              
                diff=f[0];
            }
            len =high-low+1;
            res=max(res,len);
        }
        return (f.size()==1)?0:res;
        
    }
};