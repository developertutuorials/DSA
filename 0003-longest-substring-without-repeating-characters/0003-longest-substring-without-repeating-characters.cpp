class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low =0;
        int high =0;
        int ans =INT_MIN;

        unordered_map<char,int>mp;
        for(high;high<n;high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(mp[low]);
                }
                low++;

            }
            if(mp[s[high]]==1){
                int len =high-low+1;
                ans =max(ans,len);
            }
        }  
        return (ans==INT_MIN)?0:ans;  
    }
};