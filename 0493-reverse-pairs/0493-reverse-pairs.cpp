class Solution {
public:
    void merge(vector<int> &nums, int l, int mid, int h)
    {
    int i = l;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= h)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid)
    {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= h)
        {
            temp.push_back(nums[j]);
            j++;
        }

        for (int i = l; i <= h; i++)
        {
            nums[i] = temp[i - l];
        }
    }

    int countPairs(vector<int> &nums, int l, int mid, int h)
    {
        int count = 0;
        int temp = mid + 1;
        for(int i = l; i <= mid; i++)
        {
            while(temp <= h && nums[i] > 2LL * nums[temp])
            {
                temp++;
            }
            count += temp -(mid + 1);
        }
        return count;
    }
    int partition(vector<int> &nums, int l, int h)
    {
        int cnt= 0;
        if (l >= h)
            return cnt;
        int mid = (l + h) / 2;
        cnt += partition(nums, l, mid);
        cnt += partition(nums, mid + 1, h);
        cnt += countPairs(nums, l, mid, h);
        merge(nums, l, mid, h);

        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return partition(nums, 0, nums.size() - 1);
    }
};