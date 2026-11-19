class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) 
    {
        int n = colors.size();

        int count = 0;

        int i;
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (colors[i] != colors[i + 1] && colors[i] != colors[n - 1])    
                {
                    count++;
                }  
            }

            if (i == n - 1)
            {
                if (colors[i] != colors[i - 1] && colors[i] != colors[0])
                {
                    count++;
                }
            }

            if (i != 0 && i != n - 1)
            {
                if (colors[i] != colors[i + 1] && colors[i] != colors[i - 1])
                {
                    count++;
                }
            }
        }

        return count;

    }
};