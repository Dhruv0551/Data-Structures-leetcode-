class Solution {
public:
    int lengthOfLastWord(string s) {
        bool foundChar = false;
        int charLen = 0;

        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(foundChar && s[i] != ' ')
            {
                charLen++;
            }
            else if(!foundChar && s[i] != ' ')
            {
                foundChar = true;
                charLen++;
            }
            else if(!foundChar && s[i] == ' ')
            {
                continue;
            }
            else
            {
                break;
            }
        }

        return charLen;
    }
};