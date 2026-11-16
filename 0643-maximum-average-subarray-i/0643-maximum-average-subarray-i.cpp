class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n = nums.size();
        int sum = 0;

        int i = 0;
        for (i = 0; i < k; i++)
        {
            sum = sum + nums[i];
        }

        int max_sum = sum;

        int start = 0, end = k;
        while (end < n)
        {
            sum = sum - nums[start];
            start++;

            sum = sum + nums[end];
            end++;

            max_sum = max(sum, max_sum);
        }

        double ans = (double) max_sum / k;

        return ans;
    }
};