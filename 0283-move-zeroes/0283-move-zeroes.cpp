class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();

        int index_to_insert = 0;

        int i;
        for (i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[index_to_insert] = nums[i];
                index_to_insert++;
            }
        }

        while (index_to_insert < n)
        {
            nums[index_to_insert] = 0;
            index_to_insert++;
        }
        
    }
};