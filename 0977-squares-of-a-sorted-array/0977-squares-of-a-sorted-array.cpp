class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums){
        int n = nums.size();
        vector<int>a;
        vector<int>b;

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }

        }
        if(b.size()==0){
            for(int i =0;i<a.size();i++){
                a[i]=a[i]*a[i];

            }
            return {a};
        }
        if(a.size()==0){
            for(int i =0;i<b.size();i++){
                b[i]=b[i]*b[i];

            }
            reverse(b.begin(),b.end());
            return {b};
        }
        for(int i=0;i<a.size();i++){
            a[i]=a[i]*a[i];
        }
        for(int i=0;i<b.size();i++){
            b[i]=b[i]*b[i];
        }
        reverse(b.begin(),b.end());
        vector<int>arr(a.size()+b.size());
        int l=0;
        int r=0;
        int id=0;
        while(l<a.size() && r<b.size()){
            if(a[l]<b[r]){
                arr[id]=a[l];
                id++;
                l++;
            }
            else{
                arr[id]=b[r];
                id++;
                r++;
            }
        }
        while(l<a.size()){
            arr[id]=a[l];
            id++;
            l++;
        }
        while(r<b.size()){
            arr[id]=b[r];
            id++;
            r++;
        }

        return {arr};
    }
       
        
        
    
};