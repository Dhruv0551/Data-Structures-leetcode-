class Solution {
public:
    int maxArea(vector<int>& height) {
        int minOfTwo;
        int i = 0;
        int j = size(height) - 1;;
        int maxWater = INT_MIN;
        int curr_water;
        while(i < j)
        {
            minOfTwo = min(height[i], height[j]);
            curr_water = minOfTwo * (j - i);

            maxWater = max(curr_water, maxWater);

            if(height[i] < height[j])
                i++;
            else j--;
        }

        return maxWater;
    }
};