class Solution {
public:
    string removeOuterParentheses(string s) {
        pair<char, char> par = {'(', ')'};
        int count = 0;
        string temp;
        for(int i = 0; i < s.length(); i++)
        {
            if (s[i] == par.first)
            {
                if(count > 0) temp += s[i];
                count++;
            }
            else 
            {
                count--;
                if(count > 0) temp += s[i];
            }
        }
        return temp;
    }
};