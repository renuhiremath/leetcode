// https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) 
        {
            return false;
        }

        if (x<10)
        {
            return true;
        }
        string s1;

        while (x>0)
        {
            s1+=('0' + (x%10));
            x /= 10;
        }

        string s2 = s1; 
        
        reverse(s1.begin(), s1.end());
        
        if (s1.compare(s2))
            return false;
        
        return true;
    }
};
