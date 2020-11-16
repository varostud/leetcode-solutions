#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> hashStr;
        
        for(int i = 0; i < 9; i++) //task size
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] != '.' 
                    && (!hashStr.insert((char)i + " row " + board[i][j]).second
                    || !hashStr.insert((char)j + (string)" column " + board[i][j]).second
                    || !hashStr.insert((char)(i/3) + (string)" " + (char)(j/3) + (string)" box " + board[i][j]).second))
                {
                    return false;
                }
            }
        }
        return true;
    }
};