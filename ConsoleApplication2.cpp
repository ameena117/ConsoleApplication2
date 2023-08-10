class Solution {
public:
    char roman[13] = { 'I','V','X','L','C','D','M','IV','IX','XL','XC','CD','CM' };
    int integer[13] = { 1,5,10,50,100,500,1000,4,9,40,90,400,900 };
    int i = 0;
    int sum = 0;
    int romanToInt(string s) {
        for (i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < 13; j++)
            {
                if (s[i] == roman[j]) {
                    sum += integer[j];
                }
            }
        }
        return sum;
    }
};