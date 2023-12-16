class Solution {
public:
    bool canWinNim(int n) {

/* 

it is a game where you and your freind  have to say a numer starting from 1 to n , last person saying n wins and at 1 time you can say upto 3 numbers  you go first 
if you win print 1 else print 0
trick ->always make it a factor of 4 for u!! to win
you will only loose if n is already a factor of 4

*/

if (n%4!=0)
return 1;
else 
return 0;






        
    }
};