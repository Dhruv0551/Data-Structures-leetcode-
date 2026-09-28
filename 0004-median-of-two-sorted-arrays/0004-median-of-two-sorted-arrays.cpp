class Solution {
public:

    pair<int, int> getMedianValues(vector<int> &nums1, vector<int> &nums2)
    {
        int l1 = 0, l2 = 0;
        int r1 = nums1.size(), r2 = nums2.size();
        int counter = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        int n = (n1 + n2) / 2;
        pair<int, int> ans;
        while(l1 < r1 && l2 < r2)
        {
            if(nums1[l1] <= nums2[l2])
            {
                if(counter == n-1)
                    ans.first = nums1[l1];
                else if(counter == n)
                    ans.second = nums1[l1];
                l1++;
                counter++;
            }
            else {
                if(counter == n-1)
                    ans.first = nums2[l2];
                else if(counter == n)
                    ans.second = nums2[l2];
                l2++;
                counter++;
            }
        }

        while(l1 < r1)
        {
            if(counter == n-1)
                    ans.first = nums1[l1];
                else if(counter == n)
                    ans.second = nums1[l1];
            l1++;
            counter++;
        }

        while(l2 < r2)
        {
            if(counter == n-1)
                    ans.first = nums2[l2];
                else if(counter == n)
                    ans.second = nums2[l2];
            l2++;
            counter++;
        }

        if((n1 + n2) % 2 != 0)
        {
            ans.first = -1;
        }
        return ans;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        pair<int, int> median = getMedianValues(nums1, nums2);
        if(median.first == -1)
        {
            return median.second;
        }  
        return (float(median.first + median.second) / 2);
    }
};