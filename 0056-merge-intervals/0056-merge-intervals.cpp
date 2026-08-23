class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        for(int i = 0; i < n; i++)
        {
            int head = intervals[i][0];
            int tail = intervals[i][1];

            if(!ans.empty() && tail <= ans.back()[1])
                continue;

            for(int j = i+1; j < n; j++)
            {
                if(tail >= intervals[j][0])
                    tail = max(tail, intervals[j][1]);
                else break;
            }
            ans.push_back({head, tail});
            
        }

        return ans;

    }
};