class Solution {
public:
    int longestPalindrome(string s) {

        /*
        apprach=>
        largest palendrome are always hav odd no of alphabet
        if any alpbhabet is occouring in EVEN number then it will be the part of pallendrome
        if any alpbhabet is occouring in ODD number then it out of all odd even will comebut the odd one may or maynot come

        store the count of all the char
        char with EVEN count can be added DIRECTLY in the final answer
        char with ODD count can be added as [COUNT -1] in the final answer
        now ADD +1 IN THE FINAL ANWER if any odd  count present as it can come in the middle else ADD 0 
        
        twist
        thw value can include both  (A) and (a)  where A != a
        
        */

        vector<int>lower(26,0);// for lower alphabet like a,b,c..z 
        vector<int>upper(26,0); // for upper alphabet like A,B,C..Z
        bool ODD = 0;
        int count=0;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]>='a') // if lower letter based on ASCII value 
            lower[s[i]-'a']++; // keep count 
            else  //if capital letter based on ASCII value
            upper[s[i]-'A']++; //keep count
        }


        for(int i =0;i<26;i++)
        {
            if(lower[i]%2==0)
            count = count+ lower[i];
            else
            {
                count = count + lower[i]-1;
                ODD=1;
            }

            if(upper[i]%2==0)
            count = count+ upper[i];
            else
            {
                count = count + upper[i]-1;
                ODD=1;
            }
           
        }
        return count + ODD;


    }
};