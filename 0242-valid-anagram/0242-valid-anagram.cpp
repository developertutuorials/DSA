class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size())return false;
        // unordered_map<char,int>mp;
        // for(int i=0;i<s.size();i++){
        //     mp[s[i]]++;
        // }
        // for(int i=0;i<t.size();i++){
        //     if(mp.find(t[i])!=mp.end()){
        //         mp[t[i]]--;
        //         if(mp[t[i]]==0){
        //             mp.erase(t[i]);
        //         }
        //     }
        // }
        // if(mp.empty())return true;
        // return false;

        if(s.size()!=t.size())return false;
        int freq[26]={0};
        for(int i =0;i<s.size();i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i =0;i<26;i++){
            if(freq[i]!=0)return false;
        }
        return true;
    }
};