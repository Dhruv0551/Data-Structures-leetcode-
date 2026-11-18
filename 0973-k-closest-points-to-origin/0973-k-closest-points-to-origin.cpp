class Solution {
public:

    int getDist(pair<int, int> p)
    {
        return (p.first * p.first) + (p.second * p.second);
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for(int i = 0; i < size(points); i++)
        {
            int distance = getDist({points[i][0], points[i][1]});

            pq.push({distance, i});
        }
    vector<vector<int>> vec;
        while(k--)
        {
            vec.push_back(points[pq.top().second]);
            pq.pop();
        }


        return vec;
    }
};