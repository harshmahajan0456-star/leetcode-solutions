class Solution{
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        // int n = nums.size();

        // int start = 0, end = 0, count = 0, sum = 0;

        // while (end < n)
        // {
        //     sum = sum + nums[end];
        //     if (sum == k)
        //     {
        //         count++;
        //         end++;
        //         sum = 0;
        //     }
        //     else if (sum < k)
        //     {
        //         end++;
        //     }
        //     else 
        //     {
        //         start++;
        // }

        // return count;

        int n = nums.size();
        int count = 0, sum;

        int i;
        for (i = 0; i < n; i++)
        {
            sum = nums[i];

            if (sum == k)
            {
                count++;
            }

            int j;
            for (j = i + 1; j < n; j++)
            {
                sum = sum + nums[j];
                if (sum == k)
                {
                    count++;
                }
            }
        }

        return count;
        
    }
};







