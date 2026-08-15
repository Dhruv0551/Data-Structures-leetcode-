class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    unordered_set<int> row_st;
    unordered_set<int> col_st;

    for (int i = 0; i < (int)matrix.size(); i++)
    {
        for (int j = 0; j < (int)matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                row_st.insert(i);
                col_st.insert(j);
            }
        }
    }

    for (int i = 0; i < (int)matrix.size(); i++)
    {
        for (int j = 0; j < (int)matrix[i].size(); j++)
        {
            if (row_st.find(i) != row_st.end() or col_st.find(j) != col_st.end())
            {
                matrix[i][j] = 0;
            }
        }
    }
}
};