class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // unordered_set<int> st;
        // for(auto x: nums){
        //     if(st.find(x) != st.end()){
        //         return true;
        //     }
        //     else{
        //         st.insert(x);
        //     }
        // }
        // return false;
        sort(nums.begin(),nums.end());
    
        int j=1;
        while(j<nums.size()){
            if(nums[j-1]==nums[j]){
                return true;
            }
            j++;
          
        }
        return false;
    }

};