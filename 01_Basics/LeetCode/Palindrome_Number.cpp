class Solution {
public:
    bool isPalindrome(long x) {
        long ori=x;
        long rev =0;
        while (x>0){
            long digit =x%10;
            rev= rev*10 + digit;
            x=x/10;
        }
        if(ori==rev){
            return true;
        }
        else{
            return false;
        }
        
    }
};
