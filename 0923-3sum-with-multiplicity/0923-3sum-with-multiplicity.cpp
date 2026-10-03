class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int mod = 1000000007;
        long long result = 0;

        for(int i = 0; i < size(arr); i++)
        {
            int count[101] = {};
            for(int j = i + 1; j < size(arr); j++)
            {
                int k = target - arr[i] - arr[j];

                if(k >= 0 && k <= 100 && count[k] > 0)
                {
                    result += count[k];
                    result %= mod;
                }
                count[arr[j]]++;
            }
        }

        return (int)result;
    }
};