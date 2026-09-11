class Solution {
public:

    vector<char>rev(vector<char> &s,int low,int high){
        int len =high-low+1;
        if(len==0 || len==1){
            return s;
        }
        swap(s[low],s[high]);
        return rev(s,low+1,high-1);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        int low =0;
        int high = n-1;
        rev(s,low,high);
    }
};