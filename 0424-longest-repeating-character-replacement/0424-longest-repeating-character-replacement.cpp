class Solution {
public:
    int find(vector<int>&a){
        int maxc = -1;
        for(int i =0;i<256;i++){
            maxc=max(maxc,a[i]);
        }
        return maxc;
    }
    int characterReplacement(string s, int k) {
         int n = s.size();
         int low=0;
         int high=0;
         int res=INT_MIN;
         
         vector<int>mp(256,0);
         for(high=0;high<n;high++){
            mp[s[high]]++;
            int len = high-low+1;
            int maxint=find(mp);
            int diff =len-maxint;
            while(diff>k){
                mp[s[low]]--;
                low++;
                len=high-low+1;
                maxint=find(mp);
                diff=len-maxint;
            }
            len=high-low+1;
            res=max(res,len);
         }
         return res;
    }
};