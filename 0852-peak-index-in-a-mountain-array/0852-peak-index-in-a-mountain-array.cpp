class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start=0 ,end =arr.size()-1,mid;
        while(start<=end){
            //mid= start+(end-start)-> this will cause an error here

            mid= end+(start-end)/2; // -> no runtime error

            // peak element--> left and right dono sey bada hai
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }

            // right side move ->if mid is graeter than (mid-1)
            else if(arr[mid]>arr[mid-1]){
                start=mid+1;
            }

            // left side move -->if mid is graeter than (mid+1)
            else
            end=mid-1;

        }
        return -1;

    }
};