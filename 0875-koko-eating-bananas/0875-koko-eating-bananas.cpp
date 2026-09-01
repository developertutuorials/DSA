class Solution {
public:

    long long findhour(vector<int> &arr,int s ,int speed){
        long long h =0;
        for(int i=0;i<s;i++){
            h=h+(arr[i]/speed);
            if(arr[i]%speed!=0){
                h++;
            }
        }
        return h;

    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n =piles.size();
        int low=1;
        long long high = *max_element(piles.begin(),piles.end());
        long long res= -1;
        while(low<=high){
            int guess_speed=(high+low)/2;
            long long hour = findhour(piles,n,guess_speed);
            if(hour > h){
                low=guess_speed+1;
            }
            else{
                res=guess_speed;
                high=guess_speed-1;
            }
        }   
        return res;
    }
};