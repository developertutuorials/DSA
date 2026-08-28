class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>f;
        for(char i:s){
            f[i]++;
        } 
        int res=0;
        bool odd = false;
        for(auto i:f){
         
            int freq=i.second;
            if(freq %2==0){
                res+=freq;
            }
            else{
                res+=freq-1;
                odd=true;
            }
        } 
        if(odd){
            res+=1;
        }
        return res;  

    }
};