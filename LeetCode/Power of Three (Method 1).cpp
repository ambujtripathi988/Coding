
// https://leetcode.com/problems/power-of-three/

// Method 1  
 
class Solution {
public:
    bool isPowerOfThree(int n) 
    {   
        for(int i = 0 ; i <= sqrt(n) ; i++)
            if(n == pow(3,i))
                return true ;
        
        return false ;
    }
};
