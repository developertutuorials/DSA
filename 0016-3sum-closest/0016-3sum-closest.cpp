class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];
        for(int i =0;i<n-2;i++){
            if(i>0 &&nums[i]==nums[i-1]){
                continue;
            }
            
            int left =i+1;
            int right =n-1;
            
            while(left<right){
                int s=nums[i]+nums[left]+nums[right];
                if(abs(s-target)<abs(closest-target)){
                        closest=s;
                }
                
                if(s==target){
                    return closest;
                    left++;
                    right--;
                 
                }
                else if(s>target){
                    right--;

                }
                else{
                    left++;
                }
            }
        }
        return closest;
        
    }
};