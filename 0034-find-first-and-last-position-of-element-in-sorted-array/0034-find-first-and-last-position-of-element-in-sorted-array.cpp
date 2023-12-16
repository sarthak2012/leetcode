class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    // we have to find the first occourence and last occourence of        a given target element using BINARY SEARCH


    int start=0,end=nums.size()-1,mid , firstOccour=-1,lastOccour=-1;

    // APPROACH-> first find first occourence using BINARY SEARCH
    //  find start ,end , mid=start+end by 2

    while(start<=end){
        mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            firstOccour=mid;
            end=mid-1;

        }
        else if(nums[mid]<target)
        start=mid+1;
        else
        end=mid-1;

    }
    // APPROACH-> first find last occourence using BINARY SEARCH
    //  find start ,end , mid=start+end by 2

    start=0,end=nums.size()-1 ;// re-place your start and end as it is 

     while(start<=end){
        mid=start+(end-start)/2;
        if(nums[mid]==target)
        {
            lastOccour=mid;
            start=mid+1;

        }
        else if(nums[mid]<target)
        start=mid+1;
        else
        end=mid-1;

    }
//creating a vector int named as a of size 2
    vector<int>a(2);
    a[0]=firstOccour;
    a[1]=lastOccour;
    return a;
    }
};