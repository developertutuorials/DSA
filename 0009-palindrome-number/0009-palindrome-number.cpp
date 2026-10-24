class Solution {
public:
    bool isPalindrome(int x) {
        long long org = x;
        long long digit=0;
        long long rev=0;
        while(x>0){
            digit = x%10;
            rev = (rev*10)+digit;
            x=x/10;
        }
        return(org==rev)?true:false;

        
    }
};