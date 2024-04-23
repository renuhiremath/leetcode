// https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        int l = 0;
        int len = s.size();
        vector<char> stack;

        if (len == 0)
        {
            return true;
        }
        if (len%2 !=0 )
        {
            return false;
        }

        while (l<len)
        {
            if (s[l] == '(' ||
                s[l] == '{' ||
                s[l] == '[')
            {
                stack.push_back(s[l]);
            }
            else 
            {
                if (stack.empty())
                {
                    return false;
                }
                
                char last = stack.back();
                
                if ((s[l] == ')' && last != '(') ||
                    (s[l] == '}' && last != '{') ||
                    (s[l] == ']' && last != '['))
                {
                    return false;
                }
                stack.pop_back();
            }
            l++;
        }

        if (stack.empty())
            return true;

        return false;
    }
};