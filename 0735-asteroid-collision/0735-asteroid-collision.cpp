class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(auto &x: asteroids)
        {
            if(x > 0 || st.empty()) st.push(x);

            else if(!st.empty() && st.top() == abs(x)) st.pop();

            else 
            {
                bool isSame = false;
                while(!st.empty() && st.top() > 0 && st.top() <= abs(x))
                {
                    if(st.top() == abs(x))
                    {
                        st.pop();
                        isSame = true;
                        break;
                    }
                    st.pop();
                }
                if(!isSame && (st.empty() || st.top() < 0)) st.push(x);
            }
        }

        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};