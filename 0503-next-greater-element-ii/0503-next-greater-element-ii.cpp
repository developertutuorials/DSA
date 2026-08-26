class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int> res(n);
        // circular ke liye pahele stack me store kr liye values ko ulta side se 
        for(int i =n-2;i>=0;i--){
            st.push(nums[i]);
        }
        // abb normal next greater element lga dene ka
        for(int i =n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            if(st.empty())res[i]=-1;
            else {
                res[i]=st.top();
            }
            st.push(nums[i]);
        }
        return res;

    }
};