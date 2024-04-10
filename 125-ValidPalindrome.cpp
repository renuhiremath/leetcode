// https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    bool isAlphaNum(char ch)
    {
        if ((ch >= 'a' && ch<='z') || 
            (ch >= 'A' && ch<='Z') || 
            (ch >= '0' && ch<='9') )
        {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int i =0;
        int j = s.length() -1;

        while(i<=j)
        {
            while (i < s.length() - 1 && !isAlphaNum(s[i]) )
            {
                i++;
            }
            while (j >= 0 && !isAlphaNum(s[j]) )
            {
                j--;
            }

            if (i<=j && tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }

            i++;
            j--;
        }
        return true;
    }
};
