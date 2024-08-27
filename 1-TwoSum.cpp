// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> values;
        
        for (auto i: nums)
        {
            int diff = target - i;
            auto it = find(i, nums.end(), diff);
            if (it != nums.end())
            {
                values.push_back(i);
                values.push_back(it-nums.begin());
                return values;
            }
        }

        return values;
    }
};