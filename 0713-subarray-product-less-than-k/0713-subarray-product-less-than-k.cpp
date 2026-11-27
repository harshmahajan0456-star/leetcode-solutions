class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int n = nums.size();

        int pro = 1;
        int ans = 0;

        if (k <= 1) 
        return 0;

        
        int start = 0, end = 0;
        while (end < n)
        {
            pro = pro * nums[end];

            while (pro >= k)
            {
                pro = pro / nums[start];
                start++;
            }

            
            ans = ans + (end - start + 1);
            
            end++;
        }

        return ans;

    }
};