class Solution {
public:
    string sortVowels(string s) {
        /*
        approach=> 
        select the vowel
        sort the vowel
        arrange the vowel
        insert the vowel at correct place
        here capital letters(ABC..Z) are to be placed before the lower letters{abc....z)
        do not change the place of any consonents
        */
        vector<int> lower(26,0); // to store lower case alphabets
        vector<int> upper(26,0); // to store upper case alphabets
        for(int  i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ) // to count  lowercase vowels
            {
            lower[s[i]-'a']++;
            s[i]='#'; //as it is a vowel 
            }
            else if(s[i]=='A' ||s[i]=='E'||s[i]=='I' ||s[i]=='O' ||s[i]=='U') // to count  uppercase viwels
            {
            upper[s[i]-'A']++;
            s[i]='#'; //as it is a vowel
            }
        }
        string ans;
        // sort uppercase
        for(int  i=0;i<26;i++)
        {
            char ch ='A'+i;
            while(upper[i])
            {
                ans+=ch;
                upper[i]--;
            }
        }
         // sort lowercase
        for(int  i=0;i<26;i++)
        {
            char ch ='a'+i;
            while(lower[i])
            {
                ans+=ch;
                lower[i]--;
            }
        }
        // code for updation using two pointers  [out all vowels back to # ]
        
        int first_pointer=0;
        int second_pointer=0;
        while(second_pointer < ans.size())
        {
            if(s[first_pointer]=='#')
            {
                s[first_pointer]=ans[second_pointer];
                second_pointer++;

            }
            first_pointer++;

        }
        return s;
   }
};