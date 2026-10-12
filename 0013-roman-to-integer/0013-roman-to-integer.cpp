class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mpp = {{'I', 1},   {'V', 5},   {'X', 10},
                                        {'L', 50},  {'C', 100}, {'D', 500},
                                        {'M', 1000}};
        int curr_max = INT_MIN;
        int sum = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (mpp[s[i]] >= curr_max) {
                sum += mpp[s[i]];
            } else
                sum -= mpp[s[i]];

            curr_max = max(curr_max, mpp[s[i]]);
        }
        return sum;
    }
};