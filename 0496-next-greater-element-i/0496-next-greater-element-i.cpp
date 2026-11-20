class Solution {
public:

    unordered_map<int, int> getGreater(vector<int>& nums)
    {
        stack<int> st;
        unordered_map<int, int> mpp;

        for(int i = nums.size() - 1; i >= 0; i--)
        {
            int x = nums[i];

            while(!st.empty() && st.top() <= x)
            {
                st.pop();
            }

            if(st.empty())
                mpp[x] = -1;
            else
                mpp[x] = st.top();

            st.push(x);
        }

        return mpp;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> mpp = getGreater(nums2);

        vector<int> ans;

        for(auto &x : nums1)
        {
            ans.push_back(mpp[x]);
        }

        return ans;
    }
};