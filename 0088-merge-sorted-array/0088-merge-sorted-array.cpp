class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int low1 = 0;
        int low2 = 0;
        while( low1 < m && low2 < n)
        {
            if (nums1[low1] < nums2[low2])
            {
                temp.emplace_back(nums1[low1]);
                low1++;
            }
            else
            {
                temp.emplace_back(nums2[low2]);
                low2++;
            }
        }

        while(low1 < m)
        {
            temp.emplace_back(nums1[low1]);
            low1++;
        }

        while(low2 < n)
        {
            temp.emplace_back(nums2[low2]);
            low2++;
        }

        for(int i = 0; i < temp.size(); i++)
        {
            nums1[i] = temp[i]; 
        }

    }
};