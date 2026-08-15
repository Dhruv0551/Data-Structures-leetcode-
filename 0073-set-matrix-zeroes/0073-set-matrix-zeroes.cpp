class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row_vec(matrix.size(), 0);
        vector<int> col_vec(matrix[0].size(), 0);

        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(matrix[i][j] == 0)
                {
                    row_vec[i] = 1;
                    col_vec[j] = 1;
                }
            }
        }


        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(row_vec[i] or col_vec[j])
                    matrix[i][j] = 0;
            }
        }
    }
};