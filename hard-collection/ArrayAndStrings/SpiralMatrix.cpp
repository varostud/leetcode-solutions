class Solution {
public:
    /*
    void printVector(vector<int> &v)
    {
        for(int i = 0; i < v.size(); i++)
        {
            std::cout << v[i] << ' ';
        }
        std::cout << '\n';
    }
    */
    
    //TODO: rework variables in cycles?
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size() == 0) return res;
        
        int row = matrix.size();
        int col = matrix[0].size();
        int rowSt = 0;
        int colSt = 0;
        
        while(rowSt < row && colSt < col)
        {
            for(int i = colSt; i < col; i++)
            {
                res.push_back(matrix[rowSt][i]);
            }
            //printVector(res);
            for(int i = rowSt + 1; i < row; i++)
            {
                res.push_back(matrix[i][col - 1]);
            }
            //printVector(res);
            if(row - rowSt > 1)
            {
                for(int i = col - 2; i > colSt - 1; i--)
                {
                    res.push_back(matrix[row - 1][i]);
                }
            }
            //printVector(res);
            if(col - colSt > 1)
            {
                for(int i = row - 2; i > rowSt; i--)
                {
                    res.push_back(matrix[i][colSt]);
                }
            }
            //printVector(res);
            
            rowSt++;
            colSt++;
            row--;
            col--;
        }
        return res;
    }
};