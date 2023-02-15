
// https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if( x < 0 || (x != 0 && x % 10 == 0) )
            return false ;

        if(x < 10)
            return true ;

        int sq = sqrt(x) ;

        if(sq * sq == x)
            return true ;

        int half = 0 ;

        while(x > half)
        {
            half = half * 10 + x % 10 ;

            x /= 10 ;
        }

        if(half == x || half / 10 == x)
            return true;
        
        cout << "false occurs\n" ;

        return false ;    
    }
};
