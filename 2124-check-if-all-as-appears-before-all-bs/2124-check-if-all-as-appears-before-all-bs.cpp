class Solution {
public:
    bool checkString(string s) {
        string a = s;
        sort(s.begin(), s.end());
        return s == a;
    }
};