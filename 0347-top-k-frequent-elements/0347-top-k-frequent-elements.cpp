class Solution {
public:
    int maxfreq(unordered_map<int,int>map){
        int max_freq=0;
        int element=-1;
        for(auto it:map){
            if(it.second>max_freq){
                max_freq=it.second;
                element=it.first;
            }
        }
        return element;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        int max_element=0;
        vector<int>res;
        unordered_map<int,int>f;
        for(int i =0;i<n;i++){
            f[nums[i]]++;
        }

        while(k>0){
            max_element=maxfreq(f);
            res.push_back(max_element);
            f.erase(max_element);
            k--;
        }
        return res;
    }
};