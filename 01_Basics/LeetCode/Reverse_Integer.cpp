class Solution {
public:

    long reverse(long x) {
        if (x<0){
            return negativeInteger(x);
        }
        else if (x>0){
            return positiveInteger(x);
        }
        else{
            return 0;
        }
    }
    long negativeInteger(long x){
        int sign = -1;
        x=-x;
        long rev=0;
        while(x>0){
            long digit = x%10;
            rev= rev*10+digit;
            x=x/10;
        }
        if(rev>=INT_MIN&& rev<=INT_MAX){
        return rev*sign;}
        else{
            return 0;
        }
        
    }
    long positiveInteger(long x){

    
        long rev=0;
        while(x>0){
            long digit = x%10;
            rev= rev*10+digit;
            x=x/10;
        }
        if(rev>=INT_MIN&& rev<=INT_MAX){
        
        return rev;}
        else{
            return 0;
        }
    }
        
    
};
