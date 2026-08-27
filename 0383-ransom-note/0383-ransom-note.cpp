class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m =magazine.size();
        unordered_map<char,int>rf;
        unordered_map<char,int>mf;
        for(int i =0;i<n;i++){
            rf[ransomNote[i]]++;
        }
        for(int i =0;i<m;i++){
            mf[magazine[i]]++;
        }
        for(auto i :rf){
            char c = i.first;
            int freq_rf=i.second;
            int freq_mf=mf[c];
            if(freq_mf<freq_rf)return false;
        }
        return true;

    }
};