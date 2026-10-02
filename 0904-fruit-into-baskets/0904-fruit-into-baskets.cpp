class Solution {
public:
    int totalFruit(vector<int>&fruits) {
        int n = fruits.size();
        int low =0;
        int high =0;
        int ans = 0;
        unordered_map<int,int>mp;
        for(high;high<n;high++){
            mp[fruits[high]]++;
            while(mp.size()>2){
                mp[fruits[low]]--;
                if(mp[fruits[low]]==0){
                    mp.erase(fruits[low]);
                }
                low++;
            }
            if(mp.size()<=2){
                int len = high-low+1;
                ans = max(ans,len);
            }

        }
        return ans;
    }
};