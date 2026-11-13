class Solution {
public:
    int countSegments(string s) 
    {
        // if (s == "")
        // {
        //     return 0;
        // }


    
        int n = s.length();
        int count = 0;
        // int flag = 0;

        // if (n == 1 && s[0] != ' ')
        // {
            // return 1;
        // }

        int i;
        for (i = 0; i < n; i++)
        {
            // if (s[i] != ' ')
            // {
                // flag = 1;
            // }
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ' ))
            {
                count++;
            }
        }

        // if (flag == 0)
        // {
            // return 0;
        // }

        return count;

    }
};