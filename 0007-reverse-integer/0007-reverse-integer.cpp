class Solution {
public:
    int reverse(int x) {
        int ans=0, rem;
        while(x!=0)
        {
            rem=x%10;
            x=x/10;
            //condtion of overflow
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
                return 0;
                ans=ans*10+rem;
            
            /*
            ans=ans*10+rem;
            on running above  code --> runtime error: signed interger int overflow
            */
            
        }
       return ans;
    }
};