// https://leetcode.com/problems/valid-sudoku/description/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, bool> validMap;

        // check rows
        for (int i=0; i<board.size(); i++)
        {
            validMap.clear();
            for (int j=0; j<board[i].size(); j++)
            {   
                if ( board[i][j] != '.' &&
                validMap.find(board[i][j])!=validMap.end() )
                {
                    return false;
                }
                validMap[board[i][j]] = true;
            }
        }

        //check columns
        for (int j=0; j<board[0].size(); j++)
        {
            validMap.clear();
            for (int i=0; i<board.size(); i++)
            {   
                if ( board[i][j] != '.' &&
                validMap.find(board[i][j])!=validMap.end() )
                {
                    return false;
                }
                validMap[board[i][j]] = true;
            }
        }
        
        //check grids
        for (int i=0; i<board.size(); i+=3)
        {
            for (int j=0; j<board[i].size(); j+=3)
            {   
                validMap.clear();
                for (int r=0; r<3; r++)
                {
                    for (int c=0; c<3; c++)
                    {   
                        if ( board[i+r][j+c] != '.' && 
                        validMap.find(board[i+r][j+c])!=validMap.end() )
                        {
                            return false;
                        }
                        validMap[board[i+r][j+c]] = true;
                    }
                }
            }
        }

        return true;
    }
};