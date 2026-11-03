class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int s_count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0;

        while(i < size(g) && j < size(s))
        {
            if(g[i] <= s[j])
                s_count++;
            else {
                j++;
                continue;
            }
            i++, j++;
        }

        return s_count;
    }
};