class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for (const char &c: s)
        {
            if(c == '(') st.push(')');
            else{
                if(st.empty()){
                count++; 
                continue;
                }
                st.pop();
            }
        }
        if(st.empty()) return count;
        else return st.size() + count;
    }
};