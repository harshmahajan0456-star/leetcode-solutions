class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();

        int buy = prices[0];
        int max_profit = 0, curr_profit = 0;
        
        int i;
        for (i = 1; i < n; i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else
            {
                curr_profit = prices[i] - buy;
                max_profit = max(curr_profit, max_profit);
            }
        }

        return max_profit;

    }
};