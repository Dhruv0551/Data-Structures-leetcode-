class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = size(heights);
        for(int i = 0; i <= size(heights); i++)
        {
            int curr = (i == n) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > curr)
            {
                int height = heights[st.top()];
                st.pop();

                int right = i;
                int left = st.empty() ? -1 : st.top();

                int width =  right - left - 1;
                maxArea = max(maxArea, width * height);
            }
            st.push(i);
        }


        return maxArea;
    }
};