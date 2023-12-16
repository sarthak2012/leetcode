class Solution {
public:
    int mySqrt(int x) {
        // using binary search 
        int start=0, end=x,mid,ans;
        // for  cases having x=0 and 1 
        if(x<2)
        return x;

        while(start<=end)
        {
            mid=start+(end-start)/2;

            // if(mid*mid==x)
            // above line will create overflow due to mid*mid 

            if(mid==x/mid) // mid rectified
            return mid;

            // else if(mid*mid<x)
            // above line will create overflow due to mid*mid 

            else if(mid<x/mid) // mid rectified
            {
            ans=mid;
            start=mid+1;
            }
           
            else
            end=mid-1;
        }
        return ans;
    }
};