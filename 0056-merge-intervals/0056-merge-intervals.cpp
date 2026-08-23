class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        int front = intervals[0][0]; 
        int back = intervals[0][1];
        for(int i = 1; i < n; i++)
        {

            if(back >= intervals[i][0])
            {
                back = max(back, intervals[i][1]);
            }
            else{
                ans.push_back({front, back});
                front = intervals[i][0];
                back = intervals[i][1];
            }
        }
        ans.push_back({front, back});

        return ans;
    }
};