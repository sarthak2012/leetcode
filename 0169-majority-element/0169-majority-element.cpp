class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        an element that appears more than ⌊n / 2⌋ times. n == sze of array
        majority element always exist so no verification meeded
        approach ->
        morrey voting algo
        take  2 variable element and count
        traverse the array one by one
        if(count =0)
        count++
        element == arr[i];
        else
        if(ekemnet == arr[i])
        count++
           else
           count--
        */
        int element,count=0,n=nums.size();
        for (int i=0;i<n;i++)
        {
            if (count==0)
            {
                count =1;
                element=nums[i];
            }
            else
            {
                if(element==nums[i])
                count++;
                else
                count--;
            }
        }
        return element;

    }
};