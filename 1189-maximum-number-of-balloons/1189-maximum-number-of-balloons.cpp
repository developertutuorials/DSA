class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> f;

        for(char c : text) {
            f[c]++;
        }

        int b = 0, a = 0, l = 0, o = 0, n = 0;

        b = f['b'];
        a = f['a'];
        l = f['l'] / 2;
        o = f['o'] / 2;
        n = f['n'];

        return min({b, a, l, o, n});
    }
};
