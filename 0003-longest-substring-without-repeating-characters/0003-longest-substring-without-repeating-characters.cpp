class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /*
    here string can be anything like uppercase ..lowercase..numer..character...etc(total->256 )
    apprach 1=>
    find all the possible string taking length initialised with 1 string....2 strings tohether O(N^3)

    approach 2=> 
    taking two pointers and cheching for max non repeating values.........O(N^2)

    approach 3 =>
    sliding window approach ........O(N)
    taking window size as 1 then 2 then 3 until we find valid solution 
    wehen character repeat decrease the window size from  start(back) else keep increasing the window size

    take a vector of size 256 and keep a count of all the values initial as 0 then 
    if any value become 2 then change/shift the window size and delete the before value

    */

    /*
    step by step exicution of approach 3
    take a vector count of bool type taking 256 values soring  all as 0
    take two pointers first and second initially both at 0 index and length as 0
    while(second< s.size)
    while (count of second exist) 
    make count of fisrt as 0 and increament bcos repeating

    make secont count as 1
    length = max( length, second-first +1)
    second++
    
    return length
    */

    // code

    vector<bool>count(256,0);
    int first=0,second=0,length=0;
    while(second<s.size())
    {
        while(count[s[second]])
        {
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;
        length=max(length,second-first+1);
        second++;
    }
    return length;
    }
};