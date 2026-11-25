class Solution {
public:
    int countKConstraintSubstrings(string s, int k) 
    {
        int n = s.length();

        int ans = 0;

        int i;
        for (i = 0; i  < n; i++)
        { 
            int count_zero = 0, count_one = 0;
            
            int j;
            for (j = i; j < n; j++)
            {
                if (s[j] - '0' == 0)
                {
                    count_zero++;
                }
                else if (s[j] - '0' == 1)
                {
                    count_one++;
                }
                if (count_zero <= k || count_one <= k)
                {
                    ans++;
                }
                else 
                    break;
            }
        }
        
        return ans;

    }
};