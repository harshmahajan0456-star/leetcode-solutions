class Solution {
public:
    int bitwiseComplement(int n) 
    {
        int ans = 0;
        int x = 0;

        if (n == 0)
        {
            return 1;
        }

        while (n != 0)
        {
            int num = n % 2;

            if (num == 1)
            {
                num = 0;
            }
            else if (num == 0)
            {
                num = 1;
            }
            
            ans = ans + num * pow(2 , x);
            x++;
            n = n / 2;
        }

        return ans;

    }
};