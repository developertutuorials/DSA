class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low=0;
        int high=n-1;
        int res=arr[0];
        int idx=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(res<arr[mid]){
                res=arr[mid];
                idx=mid;
            
            }
            if(arr[mid]<=arr[mid+1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
           
            
        }
        return idx;
      
    }
};