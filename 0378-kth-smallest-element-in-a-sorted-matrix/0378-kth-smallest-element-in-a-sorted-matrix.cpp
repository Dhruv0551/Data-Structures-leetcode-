class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        priority_queue<int> pq;

        for(int i = 0; i < rowSize; i++)
        {
            for(int j = 0; j < colSize; j++)
            {
                pq.push(matrix[i][j]);

                if(pq.size() > k)
                {
                    pq.pop();
                }
            }
        }

        return pq.top();
    }
};