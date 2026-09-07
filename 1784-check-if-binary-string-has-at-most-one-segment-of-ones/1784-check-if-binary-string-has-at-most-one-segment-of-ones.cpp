class Solution {
public:
    bool checkOnesSegment(string s) {
        bool ended = false;

        for(char &c: s)
        {
            if(c == '1')
            {
                if(ended) return false;
            }
            else ended = true;
        }

        return true;
    }
};