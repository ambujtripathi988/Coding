
// https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n)  
    {
        int count = 0 , rows = 1 ;
        
        while(true)
        {
            if(n >= rows)
            {
                count ++ ;
                
                n -= rows ;
                
                rows ++ ;
            }
            
            else
            {
                break ;
            }
        }
        
        return count ; 
    }
};
