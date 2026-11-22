class Solution {
public:
    int divisorSubstrings(int num, int k) 
    {
        string number = to_string(num);
        int n = number.length();

        int count = 0;

        for (int i = 0; i <= n - k; i++)
        {
            string str = number.substr(i, k);
            int divisor = stoi(str);

            if (divisor != 0 && num % divisor == 0)
            {
                count++;
            }
        }

        return count;
    }
};