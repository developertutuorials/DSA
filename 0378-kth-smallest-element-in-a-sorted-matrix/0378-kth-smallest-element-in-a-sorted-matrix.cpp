class Solution {
public:

    int fun(vector<vector<int>> & nums,int n, int m,int gues){
        int count =0;
        int row =0;
        int col=m-1;
        while(row<n && col>=0){
            if(nums[row][col]<=gues){
                count = count + col +1;
                row++;
            }
            else{
                col--;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low =matrix[0][0];
        int high = matrix[n-1][m-1];
        int res =-1;
        while(low<=high){
            int guess = low+(high-low)/2; 
            int ans = fun(matrix,n,m,guess);
            if(ans<k){
                low=guess+1;

            }
            else{
                res = guess;
                high = guess-1;
            }

        }
        return res;
    }
};