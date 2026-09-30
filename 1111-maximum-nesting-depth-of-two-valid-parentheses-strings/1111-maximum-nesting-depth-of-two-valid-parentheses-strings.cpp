class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> temp(seq.length());
        int counter = 0;

        for(int i = 0; i < temp.size(); i++)
        {
            if(seq[i] == '(')
            {
                temp[i] = counter % 2;
                counter++;
            }
            else {
                counter--;
                temp[i] = counter % 2;
            }
        }

        return temp;
    }
};