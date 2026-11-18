class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = size(temperatures);
        stack<int> st;
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--)
        {
            int currTemp = temperatures[i];
            while(!st.empty() && temperatures[st.top()] <= currTemp)
            {
                st.pop();
            }
            st.empty() ? ans[i] = 0 : ans[i] = st.top() - i;
            st.push(i);
        }


        return ans;
    }
};