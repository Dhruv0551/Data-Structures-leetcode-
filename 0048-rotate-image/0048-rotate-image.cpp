class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i = 0; i < (int)matrix.size(); i++)
    {
        for (int j = i + 1; j < (int)matrix[0].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (auto &it : matrix)
    {
        reverse(it.begin(), it.end());
    }
    }
};