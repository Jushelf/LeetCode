class Solution
{
public:
    int reverse(int x)
    {
        int r;
        int s = 0;
        while (x != 0)
        {
            r = x % 10;
            x /= 10;
            if (s > INT32_MAX / 10 || s < INT32_MIN / 10)
            {
                return 0;
            }
            s = s * 10 + r;
        }
        
        return s;
    }
};
