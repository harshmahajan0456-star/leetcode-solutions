class Solution {
public:
    int mySqrt(int x) 
    {
        if (x == 0)
        {
            return 0;
        }

        int start = 1, end = x;
        long long ans = 0, mid, square;


        while (start <= end)
        {
            mid = end + (start - end) / 2;
            square = mid * mid;
            if (square == x)
            {
                return mid;
            }

            else if (square < x)
            {
                ans = mid;
                start = mid + 1;
            }
            
            else if (square > x)
            {
                end = mid - 1;
            }
        }

        return ans;
    }
};