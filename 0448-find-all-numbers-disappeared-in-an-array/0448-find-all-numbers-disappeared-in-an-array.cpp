class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n = nums.size();

        vector<int> result;

        int index;
        int i;
        for (i = 0; i < n; i++)
        {
            index = abs(nums[i]) - 1;

            if (nums[index] > 0)
            {
                nums[index] *= -1;
            }
            
        }

        for (i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                result.push_back(i + 1);
            }
        }

        return result;

    }
};