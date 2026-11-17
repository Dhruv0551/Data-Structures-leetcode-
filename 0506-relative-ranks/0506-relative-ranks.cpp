class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;

        for(int i = 0; i < size(score); i++)
        {
            pq.push({score[i], i});
        }

        vector<string> ans(size(score));
        int pos = 1;

        while(!pq.empty())
        {
            int ogIdx = pq.top().second;
            if (pos == 1) ans[ogIdx] = "Gold Medal";
            else if(pos == 2) ans[ogIdx] = "Silver Medal";
            else if(pos == 3) ans[ogIdx] = "Bronze Medal";
            else ans[ogIdx] = to_string(pos);
            pos++;
            pq.pop();
        }
        return ans;

    }
};