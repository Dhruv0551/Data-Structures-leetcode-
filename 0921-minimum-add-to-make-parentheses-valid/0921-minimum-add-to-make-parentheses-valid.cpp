class Solution {
public:
    int minAddToMakeValid(string s) {
        int p_count = 0;
        int count = 0;

        for(const char &c: s)
        {
            if(c == '(') p_count++;
            else {
                if(p_count > 0)
                {
                    p_count--;
                    continue;
                }
                count++;
            }
        }

        if(p_count > 0) return count + p_count;
        return count;
    }
};