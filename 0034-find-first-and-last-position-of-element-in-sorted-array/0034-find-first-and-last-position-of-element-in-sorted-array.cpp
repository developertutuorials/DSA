class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n = nums.size();
         int low=0;
         int high=n-1;
         int start=-1;
         int end=-1;
         
        //  first occurence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                start=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0;
        high=n-1;
        // last occurence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                end=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return {start,end};

    }
};