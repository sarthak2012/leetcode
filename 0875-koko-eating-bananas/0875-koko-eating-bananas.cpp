class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=0,end=0,mid , ans, n=piles.size();
        long long sum=0;

        for(int i=0;i<n;i++)
        {
            sum=start+piles[i];// oveerflow condition for int so create a long long
            end=max(end,piles[i]);
        }
        start=sum/h;
        if (!start)
        start=1;

        while(start<=end)
        {
            mid=start+(end-start)/2;// mid ==amount of banana in 1 hour
            long long totaltime=0;

            for(long long i=0;i<n;i++)
            {
                 totaltime+=piles[i]/mid;
                 if(piles[i]%mid)
                 totaltime++;

            }

            if(totaltime>h)
            {
                start=mid+1;
            }
            else
            {
                ans=mid;
                end=mid-1;
            }


        }   
        return ans;
    }
};