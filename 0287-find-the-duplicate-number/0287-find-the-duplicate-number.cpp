class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*
        ques->
        in an array with size n+1
        put elements from 1 to n
        solve the problem WITHOUT MODIFYING  the ARRAY 
        and uses only constant extra space O(1)

        APPROACH->
        use hair and tortoise algo(slow - fast pointer)

        how to know touse hair and tortoise algo
        1 duplicacy
        2 traverse through index

        how to  use hair and tortoise algo(slow - fast pointer)
        take two pointers slow and fast 
        slow moves 1 index and fast moves 2 index
        when slow amd fast pointer meet at a point == cycle detected(repeation detected)

        when sloww == fast 
        move slow to starting index and keep fast as it is 
        now move poth pointer as 1 only not 2 hops
        and the point where again slow == fast ==>cycle starting pointer==>repeated value

        return the first of the cycle
        */
        // code
        int slow = nums[0];
        int fast = nums[0];

        slow =nums[slow];       // slow moves once
        fast =nums[nums[fast]]; // fast moves twice
        // detecting cycle/repetition 
        while(slow != fast)
        {
        slow =nums[slow];       // slow moves once
        fast =nums[nums[fast]]; // fast moves twice
        }
        //sice false and out of loop
        // cycle detected 
        // finding the repeated element

        slow = nums[0]; // move slow back to starting point 

         while(slow != fast)
        {
        slow =nums[slow];       //  now slow moves once
        fast =nums[fast]; //  now fast also moves once
        }

        return slow;
        // this is the repeating number 




        return 0;
    }
};