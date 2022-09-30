
// https://leetcode.com/problems/reverse-integer/

class Solution { 
public:
    int reverse(long long int x) 
    {
        long int rev = 0 ;
        long int num = abs(x) ;
        
        while(num > 0)
        {
            int digit = num % 10 ;
            num /= 10 ;
            rev *= 10 ;
            rev += digit ;
            
            if(rev > 2147483647 || rev < -2147483648)       // maximum and minimum value of integer in c++
                return 0 ;
        }
        
        if(x < 0)
            rev *= -1 ;
        
        return rev ;
    }
};
