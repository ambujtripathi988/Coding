
// https://leetcode.com/problems/power-of-four/

// Method 2 

class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        for(int i = 0 ; i < sqrt(n) ; i++)
            if(n == pow(4,i))
                return true ;
        
        return false ;
    }
};
