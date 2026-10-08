class Solution {
public:
    string removeOuterParentheses(string s) {
        string temp = "";
        int idx1 = 0, idx2 = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                idx1++;
                if(idx1 > 1)
                    temp+=s[i];
            }
            else {
                idx2++;
                if(idx2 < idx1)
                    temp+=s[i];
            }
            if(idx1 == idx2) 
            {
                idx1 = idx2 = 0;
            }
        }
        return temp;
    }
};