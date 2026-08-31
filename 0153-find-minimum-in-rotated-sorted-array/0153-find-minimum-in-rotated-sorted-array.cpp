class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        
        int low=0;
        int high=n-1;
        int res=min(nums[low],nums[high]);
        if(n==1)return nums[0];
        if(n==2) return min(nums[0],nums[1]);
        while(low<=high){
            int mid=low+(high-low)/2;
            res=min(res,nums[mid]);
            if(nums[mid]<=nums[high]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } 
        return res;
    }
};