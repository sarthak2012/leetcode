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
      vector<int>ans;
      int start=0, end = numbers.size()-1;
      while(start<end)
        {
            if(numbers[start]+numbers[end]== target)
            {
                ans.push_back(start+1); // start+1 becouse it is 1 based indexing and not 0 based 
                ans.push_back(end+1);
                break;

            }
            else if(numbers[start]+numbers[end]> target)
            {
                end--;
                
            }
            else
            { 
             start++;
            }
        }

        return ans;

    }
};

