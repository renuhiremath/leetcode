// https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        int k = 0;
        int begin = 1;
        int end = *max_element(piles.begin(), piles.end());
        int hours = 0;

        while (begin < end)
        {
            k = begin + ((end - begin) / 2);
            hours = 0;

            for (int i = 0; i < piles.size(); i++)
            {
                hours += (piles[i] / k);
                if ((piles[i] % k) != 0)
                {
                    hours++;
                }
            }

            if (hours <= h)
            {
                end = k;
            }
            else
            {
                begin = k + 1;
            }
        }
        return end;
    }
};