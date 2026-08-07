class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int j=1;
        int cnt=1;
        int n =nums.size();
        while(j<n){
            if(nums[j]==nums[j-1]){
               cnt++;
            }
            else{
                cnt=1;
            }
            if(cnt<=2){
                i++;
                nums[i]=nums[j];
            }
            j++;
            
        }
        return i+1;

    }
};