class Solution {
public:
    int returnSum(vector<int> &weights)
    {
        int sum = 0;
        for(auto &x: weights) sum += x;
        return sum;
    }

    int returnMax(vector<int> &weights)
    {
        int maxEl = INT_MIN;
        for(auto &x: weights) maxEl = max(maxEl, x);
        return maxEl;
    }
    
    int countMinDays(vector<int> &weights, int capacity)
    {
        int count = 1;
        long long sum = 0;
        for(int i = 0; i < weights.size(); i++)
        {
            sum += weights[i];
            if(sum <= capacity) continue;
            sum = weights[i];
            count++;
        }

        return count;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = returnMax(weights);
        int right = returnSum(weights);

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if(countMinDays(weights, mid) <= days) right = mid;
            else left = mid + 1;
        }

        return right;
    }
};