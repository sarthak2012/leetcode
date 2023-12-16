class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
      /*
         approach-> 
            //using 2 pointer  and binary search (not best approch )


            // using only 2 pointer
            take two pointer start and end 
            while(start<end)
            if(start+end==target)
            return ans
            else if(start+end<target)
            start++
            else(start+end<target)
            end--;
            we have to return the two different unique indexes
      */    
      // code here 
      
      int start=0, end = numbers.size()-1;
      while(start<end)
        {
            if(numbers[start]+numbers[end]== target)
            break;
            
            else if(numbers[start]+numbers[end]< target)
            {
                start++;
            }
            else
            { 
                end--;
            }
        }
         vector<int>v;
        v.push_back(start+1);
        v.push_back(end+1);
        return v;

    }
};