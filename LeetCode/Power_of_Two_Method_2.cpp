
// https://leetcode.com/problems/power-of-two/

// Method 2 :

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        bool flag = false ;
        
        for(int i = 0 ; i <= 31 ; i++)
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
