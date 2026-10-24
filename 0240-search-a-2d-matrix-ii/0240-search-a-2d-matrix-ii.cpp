class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = size(matrix);
        int m = size(matrix[0]);

        int row = 0, col = m - 1;
        while(row < n && col > -1)
        {
            if(matrix[row][col] == target) return true;

            else if(matrix[row][col] > target) col--;
            else row++;
        }
        
        
        return false;
    }
};