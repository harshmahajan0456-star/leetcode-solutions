class Solution {
public:
    int countKConstraintSubstrings(string s, int k) 
    {
        int n = s.length();

        int start = 0, end = 0;
        int ans = 0;
        int count_zero = 0, count_one = 0;

        while (end < n)
        {

            if (s[end] - '0' == 0)
                count_zero++;
            else if (s[end] - '0' == 1)
                count_one++;

            while (count_zero > k && count_one > k)
            {
                if (s[start] - '0' == 0)
                    count_zero--;
                else if (s[start] - '0' == 1)
                    count_one--;

                start++;
            }
            
            ans = ans + (end - start + 1);

            end++;
        }

        return ans;

    }
};