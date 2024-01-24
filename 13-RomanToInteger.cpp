// https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        int value = 0;
        int i=0;

        while (i<s.size())
        {
            switch (s[i])
            {
                case 'I':
                    if (i<s.size() && s[i+1] == 'V')
                    {
                        value += 4;
                        i++;
                    }
                    else if (i<s.size() && s[i+1] == 'X')
                    {
                        value += 9;
                        i++;
                    }
                    else 
                    {
                        value +=1;
                    }
                    break;
                case 'V':
                        value +=5;
                    break;
                case 'X':
                    if (i<s.size() && s[i+1] == 'L')
                    {
                        value += 40;
                        i++;
                    }
                    else if (i<s.size() && s[i+1] == 'C')
                    {
                        value += 90;
                        i++;
                    }
                    else 
                    {
                        value +=10;
                    }
                    break;
                case 'L':
                    value+=50;
                    break;
                case 'C':
                    if (i<s.size() && s[i+1] == 'D')
                    {
                        value += 400;
                        i++;
                    }
                    else if (i<s.size() && s[i+1] == 'M')
                    {
                        value += 900;
                        i++;
                    }
                    else 
                    {
                        value +=100;
                    }
                    break;
                case 'D':
                    value += 500;
                    break;
                case 'M':
                    value += 1000;
                    break;
            }
            i++;
        }
        return value;
    }
};
