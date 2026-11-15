class Solution {
public:
    int numOfSubarrays(vector<int>& nums) {
        int oddCount = 0;
        int evenCount = 1;
        int ans  = 0;
        int prefixSum = 0;
        const int MOD = 1e9 + 7;

        for(auto &x: nums)
        {
            prefixSum += x;
            if(!(prefixSum % 2))
            {
                ans = (ans + oddCount) % MOD;
                evenCount++;
                continue;
            }
            ans = (ans + evenCount) % MOD;
            oddCount++;
        }



        return ans;
    }
};