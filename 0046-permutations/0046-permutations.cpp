class Solution {
public:

    void fun(vector<int> &nums, int n, int idx,
             vector<int> &temp, vector<vector<int>> &res,
             vector<bool> &used) {

        if(idx == n) {
            res.push_back(temp);
            return;
        }

        for(int i = 0; i < n; i++) {

            // element already used hai
            if(used[i])
                continue;

            // choose
            used[i] = true;
            temp.push_back(nums[i]);

            // recursion
            fun(nums, n, idx + 1, temp, res, used);

            // backtrack
            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        int n = nums.size();
        int idx = 0;

        vector<int> temp;
        vector<vector<int>> res;
        vector<bool> used(n, false);

        fun(nums, n, idx, temp, res, used);

        return res;
    }
};