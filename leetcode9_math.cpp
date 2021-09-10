class Solution {
public:
    bool isPalindrome(int x) 
    {
        
        if(x < 0 || (x != 0 && x % 10 == 0))
        {
            return false;
        }

        int s = 0;
        int r;
        while(s < x)
        {
            r = x % 10;
            x /= 10;
            s = s * 10 + r;
        }
        cout << "s: " << s << "x: " << x; 
        return (s == x) || (s / 10 == x);
    }
};
