
class Solution {
public:
    int findMaxCol(vector<vector<int>>& mat, int col) {
        int idx = 0;
        int maxEl = INT_MIN;

        for (int i = 0; i < mat.size(); i++) {
            if (mat[i][col] > maxEl) {
                maxEl = mat[i][col];
                idx = i;
            }
        }

        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int row = findMaxCol(mat, mid);
            int left = (mid > 0) ? mat[row][mid - 1] : -1;
            int right = (mid + 1 < m) ? mat[row][mid + 1] : -1;

            if (mat[row][mid] > left &&
                mat[row][mid] > right) {
                return {row, mid};
            }
            else if (left > mat[row][mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};
