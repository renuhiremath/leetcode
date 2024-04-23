// https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = 0;
        int begin, mid, end;
        int m = matrix.size();
        int n = matrix[0].size();

        begin = 0;
        end = m*n - 1;

        while (begin <= end)
        {
            mid = begin + ((end - begin) / 2);
            i = mid / n;
            j = mid % n;

            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] < target)
            {
                begin = mid + 1;
            }
            else 
            {
                end = mid - 1;
            }
        }

        return false;
    }
};