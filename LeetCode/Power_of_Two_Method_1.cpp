
// https://leetcode.com/problems/power-of-two/

// Method 1 :

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        bool flag = false ;
        
        for(int i = 0 ; i <= sqrt(n) + 1 ; i++)
        {    
            if(pow(2,i) == n)
            {
                flag = true ;
                break ;
            }        
        }
        
        return flag ;
    }
};
