class Solution {
public:

    // int binsearch(vector<int>& nums, int target,int low,int high){
    //     if(low <=high){
    //         int mid = low +(high-low)/2;
    //         if(nums[mid]==target){
    //             return mid;
    //         }
    //         if(nums[mid]<target){
    //             return binsearch(nums,target,mid+1,high);
           
    //         }
    //         if(nums[mid]>target){
    //             return binsearch(nums,target,low,mid-1);
    //         }
    //     }
    //     return -1;
    

    // }
    int search(vector<int>& nums, int target){
        int n = nums.size();
        int low =0;
        int high = n-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;

    }
        
   
   
    
};