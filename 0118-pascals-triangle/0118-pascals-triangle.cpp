class Solution {
public:

    vector<int> generateRow(int n)
    {
        vector<int> temp;
        int res = 1;
        temp.push_back(1);

        for(int i = 1; i < n; i++)
        {
            res *= (n - i);
            res /= i;
            temp.push_back(res);
        }

        return temp;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++)
        {
            ans.push_back(generateRow(i));
        }

        return ans;
    }
};