// https://leetcode.com/problems/binary-search/description/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() -1, mid;
        int i =0;

        while (start <= end )
        {
            mid = start + (( end - start ) / 2);
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target )
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }

        }
        
        return -1;
    }
};