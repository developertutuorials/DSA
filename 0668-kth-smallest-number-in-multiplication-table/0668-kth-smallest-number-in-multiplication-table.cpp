class Solution {
public:

    long long fun(int m, int n, int guess) {
        long long count = 0;

        for(int i = 1; i <= m; i++) {
            count += min(n, guess / i);
        }

        return count;
    }

    int findKthNumber(int m, int n, int k) {

        // Always iterate over the smaller dimension
        if(m > n)
            swap(m, n);

        int low = 1;
        int high = m * n;

        while(low <= high) {

            int guess = low + (high - low) / 2;

            long long count = fun(m, n, guess);

            if(count < k) {
                low = guess + 1;
            }
            else {
                high = guess - 1;
            }
        }

        return low;
    }
};