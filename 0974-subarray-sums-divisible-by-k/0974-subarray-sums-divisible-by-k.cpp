class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int res =0;
        int ques;
        for(int i =0;i<n;i++){
            sum+=nums[i];
            ques =sum%k;
            if(ques<0){
                ques=ques+k;
            }
            int freq = mp[ques];
            res+=freq;
            mp[ques]++;
        }
        return res;
    }
};