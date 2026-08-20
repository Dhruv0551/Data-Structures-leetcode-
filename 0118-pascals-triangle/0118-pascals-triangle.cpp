class Solution {
public:

    int nCr(int n, int r)
    {
        int result = 1;
        for(int i = 0; i < r; i++)
        {
            result *= (n - i);
            result /= (i + 1);
        }
        return result;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 0; i < numRows; i++)
        {
            vector<int> temp;
            for(int j = 0; j <= i; j++)
            {
                temp.push_back(nCr(i, j));
            }
            ans.push_back(temp);
        }

        return ans;

    }
};