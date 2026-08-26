class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefixSum = 1, suffixSum = 1;
        int revIdx = nums.size() - 1;
        int stIdx = 0;
        int maxProduct = INT_MIN;
        while(stIdx < nums.size() && revIdx >= 0)
        {
            prefixSum *= nums[stIdx];
            suffixSum *= nums[revIdx];
            maxProduct = max(maxProduct, prefixSum);
            maxProduct = max(maxProduct, suffixSum);

            if(prefixSum == 0)
            {
                prefixSum = 1;
            }
            if(suffixSum == 0)
            {
                suffixSum = 1;
            }

            

            stIdx++;
            revIdx--;
        }        
        return maxProduct;
    }
};