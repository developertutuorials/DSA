class Solution {
public:
    bool right(vector<int> &have,vector<int>&need){
        for(int i =0;i<256;i++){
            if(have[i]<need[i]){
                return false;
            }
            
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n =s.size();
        int m=t.size();
        int low=0;
        int high=0;
        int res = INT_MAX;
        int start=-1;
        vector<int>have(256,0);
        vector<int>needed(256,0);
        for(int i =0;i<m;i++){
            needed[t[i]]++;
        }
        for(high=0;high<n;high++){
            have[s[high]]++;
            
            while(right(have,needed)){
                int len = high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                
                low++;
                
                
            }
            
        }
        return (res==INT_MAX)?"":s.substr(start,res);
        
    }
};