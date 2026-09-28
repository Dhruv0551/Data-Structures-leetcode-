class Solution {
public:

    vector<int> getMergedArray(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> temp;

        int l1 = 0, l2 = 0;
        int r1 = nums1.size(), r2 = nums2.size();

        while(l1 < r1 && l2 < r2)
        {
            if(nums1[l1] <= nums2[l2])
            {
                temp.emplace_back(nums1[l1]);
                l1++;
            }
            else {
                temp.emplace_back(nums2[l2]);
                l2++;
            }
        }

        while(l1 < r1)
        {
            temp.emplace_back(nums1[l1]);
            l1++;
        }

        while(l2 < r2)
        {
            temp.emplace_back(nums2[l2]);
            l2++;
        }


        return temp;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums = getMergedArray(nums1, nums2);
        int n = nums.size();
        if(n % 2 != 0) return 1LL * nums[n / 2];
        else {
            int idx = n / 2;
            return float(nums[idx - 1] + nums[idx]) / 2; 
        }
    }
};