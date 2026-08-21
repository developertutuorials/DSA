class Solution {
public:
    int sum(vector<int>&n){
        int s=0;
        for(int i=0;i<n.size();i++){
            s+=n[i];
        }
        return s;
    }
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        int right;
        int summ=sum(nums);
        for(int i =0;i<n;i++){
         
            right = summ -nums[i]-left;
            if(left==right)return i;
            left+=nums[i];
        }
        return -1;
        
    }
};