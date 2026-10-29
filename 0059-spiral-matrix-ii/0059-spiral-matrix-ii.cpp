class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0, right = n-1;
        int top = 0, bottom = n-1;
        int counter = 0;
        vector<vector<int>> spiral(n, vector<int> (n, 0));
        while(top <= bottom && left <= right)
        {
            int temp = left;
            while(temp <= right){
                spiral[top][temp] = ++counter;
                temp++;
            }
            top++;


            temp = top;
            while(temp <= bottom)
            {
                spiral[temp][right] = ++counter;
                temp++;
            }
            right--;

            if(left <= right && top <= bottom)
            {
                temp = right;
                while(temp >= left)
                {
                    spiral[bottom][temp] = ++counter;
                    temp--;
                }
                bottom--;
            }


            if(left <= right && top <= bottom)
            {
                temp = bottom;
                while(temp >= top)
                {
                    spiral[temp][left] = ++counter;
                    temp--;
                }
                left++;
            }
        }
        return spiral;
    }
};