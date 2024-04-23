// https://leetcode.com/problems/daily-temperatures/description/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answers(temperatures.size(), 0);
        vector<int> tempStack;

        for (int day =0; day < temperatures.size(); day++)
        {
            while (!tempStack.empty() && 
                    temperatures[tempStack.back()] < temperatures[day])
            {
                answers[tempStack.back()] = day - tempStack.back();
                tempStack.pop_back();
            }

            tempStack.push_back(day);

        }

        return answers;
    }
};