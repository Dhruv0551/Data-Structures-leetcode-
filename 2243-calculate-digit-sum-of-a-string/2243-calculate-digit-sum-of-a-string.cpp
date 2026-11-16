class Solution {
public:
    string returnSum(string s, int st, int end) {
        if (st >= s.length())
            return "";
        string ans = "";
        int sum = 0;
        while (st < end && st < s.length()) {
            sum += s[st] - '0';
            st++;
        }

        return to_string(sum);
    }

    string digitSum(string s, int k) {
        // string ans = "";
        // for (int i = 0; i < s.length(); i += k) {
        //     ans += returnSum(s, i, i + k);
        // }
        string ans = s;
        while (ans.length() > k) {
            string temp = "";
            for (int i = 0; i < ans.length(); i += k) {
                temp += returnSum(ans, i, i + k);
            }
            ans = temp;
            if(ans.length() <= k)
            {
                return ans;
            }
        }

        return ans;
    }
};