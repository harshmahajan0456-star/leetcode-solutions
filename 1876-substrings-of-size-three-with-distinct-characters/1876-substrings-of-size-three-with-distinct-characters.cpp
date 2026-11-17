class Solution {
public:
    int countGoodSubstrings(string s) 
    {
        int n = s.length();

        int start = 0, end = 2;
        int count = 0;

        while (end < n)
        {
            if (s[start] != s[start + 1] && s[start + 1] != s[end] && s[start] != s[end])
            {
                count++;
            }
            start++;
            end++;
        }

        return count;

    }
};