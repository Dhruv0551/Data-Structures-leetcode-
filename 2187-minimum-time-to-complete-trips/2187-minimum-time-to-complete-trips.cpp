class Solution {
public:

    bool isTripValid(vector<int> &time, int totalTrips ,long long currDays)
    {
        long long trips = 0;
        for(int x: time)
        {
            trips += (currDays / x);
            if (trips >= totalTrips) return true;
        }

        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(), time.end());

        long long left = 1;
        long long right = 1LL * time[0] * totalTrips;

        while (left < right)
        {
            long long mid = left + (right - left) / 2;


            if(isTripValid(time, totalTrips, mid)) right = mid;
            else left = mid + 1;   
        }

        return right;
    }
};