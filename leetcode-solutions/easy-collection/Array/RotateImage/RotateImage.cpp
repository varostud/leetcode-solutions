#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int end = matrix.size() - 1;
        for(int i = 0; i < end - i; i++)
        {
            for(int j = i; j < end - i; j++)
            {
                swap(matrix[i][j], matrix[j][end - i]);
                swap(matrix[i][j], matrix[end - i][end - j]);
                swap(matrix[i][j], matrix[end - j][i]);
            }
        }
    }
};