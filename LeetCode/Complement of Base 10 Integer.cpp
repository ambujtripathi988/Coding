
// https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    int bitwiseComplement(int n)  
    {
        if(!n)
            return 1 ;          // edge case
        
        int m = n ;
        
        int num = 0 ;
        
        while(m != 0)                   // help from love babbar
        {
            num = (num << 1) | 1 ;
            
            m = m >> 1 ;
        }
        
        int ans = (~n) & num ;
        
        return ans ;
    }
};
