class Solution {
public:
    bool checkIfPangram(string sentence) {

        /*
        approach=>
        as english has 26 letters ..create an array with size 26 (indexed 0to 25) 
        thrn put all value of array as 0 initialy
        and make all values as 1 
        now if any  value of array is 0 then false
        else true

        index = name -'a' = ascii valu
        */

        vector<bool> alpha(26,0);  // creating a vector  named alpha with size 26 and initialed value as 0
        for(int i=0;i<sentence.size();i++)  // iterate all the indexes
        {
            alpha[sentence[i]-'a']=1; // make all the values as 1
        } ;

        for(int i=0;i<26;i++)
        {
            if(alpha[i]==0)
            return 0;
        }
        
        return 1;


    }
};