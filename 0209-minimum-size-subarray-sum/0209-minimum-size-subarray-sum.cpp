class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n = nums.size();

        int start = 0, end = 0;

        int sum = 0;
        int size = 1, min_size = INT_MAX;

                                                                  
        while (end < n)
        {
            sum = sum + nums[end];
            end++;

            while (sum >= target)
            {
                size = (end - start); 
                
                min_size = min(min_size, size);
                
                sum = sum - nums[start];
                start++;
            }
        } 

       if (min_size == INT_MAX)
       {
            return 0;
       }
       else
       {
            return min_size;
       }

    }
};