class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int n = cardPoints.size();

        int sum = 0;

        int i;
        for (i = 0; i < k; i++)
        {
            sum = sum + cardPoints[i];
        }   
        
        int max_points = sum;
        int right = n - 1;
        int left;
        for (left = k - 1; left >= 0; left--)
        {
            sum = sum - cardPoints[left];
            sum = sum + cardPoints[right];
            right--;

            max_points = max(sum, max_points);
        }

        return max_points;

    }
};