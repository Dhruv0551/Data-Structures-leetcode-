class Solution {
public:
    int maxDepth(string s) {
        int depthCount = 0;
        int maxDepth = 0;
        for(auto &c: s)
        {
            if (c == '(')
            {
                depthCount++;
                maxDepth = max(maxDepth, depthCount);
            }
            else if(c == ')') depthCount--;
        }
        return maxDepth;
    }
};