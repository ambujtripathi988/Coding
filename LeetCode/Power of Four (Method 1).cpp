
// https://leetcode.com/problems/power-of-four/

// Method 1 

class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(!n)
            return false ;
        
        while(n % 4 == 0)
            n /= 4 ;
        
        if(n != 1)
            return false ;
        
        else
            return true ;
    }
};
