class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int n = s.length(), m = t.length();

        vector<int> aux1(26, 0);

        int i;
        for (i = 0; i < n; i++)
        {
            aux1[s[i] - 'a']++;
        }

        vector<int> aux2(26, 0);

        for (i = 0; i < m; i++)
        {
            aux2[t[i] - 'a']++;
        }

        char ans = ' ';

        for (i = 0; i < 26; i++)
        {
            if (aux1[i] != aux2[i])
            {
                ans = i + 'a';       
                break;
            }
        }

        return ans;


    }
};