class Solution {
public:
    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thousands[]={"","M","MM","MMM"};
        
         return thousands[num/1000] + hundreds[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
      // 1994%10= 4
      // 1994%100= 94== 94/10==90
      // 1994%1000=994== 994/100==900
      // 1994/1000= 1000
      
    }
};