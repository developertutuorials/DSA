class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)return n;
        int prev =1;
        int prev_prev=1;
        int ans;
        for(int i =2;i<=n;i++){
            ans = prev+prev_prev;
            prev_prev = prev;
            prev = ans;
        }
        return ans;
    }
};