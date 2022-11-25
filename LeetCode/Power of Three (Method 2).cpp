
// https://leetcode.com/problems/power-of-three/

// Method 2 

class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(!n)
            return false ;
        
        while(n % 3 == 0)
            n /= 3 ;
        
        if(n != 1)
            return false ;
        
        else
            return true ;
    }
};
