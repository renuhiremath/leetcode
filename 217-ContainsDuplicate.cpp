//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> num_map;

        for (int i=0; i< nums.size(); i++)
        {
            num_map[nums[i]]++;
            if (num_map[nums[i]]>1)
            {
                return true;
            }
        }

        return false;
        /*
        sort(nums.begin(), nums.end());
        for (int i=0; i< nums.size()-1; i++)
        {
            if (nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;*/
    }
};