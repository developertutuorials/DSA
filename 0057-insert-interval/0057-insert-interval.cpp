class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        int n =intervals.size();
        int start1=intervals[0][0];
        int end1=intervals[0][1];
        vector<vector<int>>res;
        for(int i =1;i<n;i++){
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            if(end1>=start2){
                start1=start1;
                end1=max(end1,end2);
                continue;
            }
            res.push_back({start1,end1});
            start1=start2;
            end1=end2;
        }
        res.push_back({start1,end1});
        return res;

    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        auto it =lower_bound(intervals.begin(),intervals.end(),newInterval);
        intervals.insert(it,newInterval);
  
        vector<vector<int>>ans =merge(intervals);
        return ans;

    }
};