class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
     //Your code here
      int count = 0;
      int n = arr.size();
      int longest = 1;
      int lastSmaller = INT_MIN;

      if(n==0) return 0; // when no element present in it
      sort(arr.begin(), arr.end()); // sort first 

      for(int i=0;i<n;i++)
      {
          if (arr[i]-1 == lastSmaller )
          {
              count +=1;
              lastSmaller = arr[i];
          }
          else if (lastSmaller != arr[i])
          {
              count = 1;
              lastSmaller = arr[i];
              
          }
          longest = max(longest , count);
      }
      return longest;
        
    }
};