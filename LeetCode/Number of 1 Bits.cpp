
// https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int one = 0 ;
        
        for(int i = 0 ; i < 32 ; i++)
            if(( (n >> i) & 1 )== 1)            // right shifting and counting sign bit
                one ++ ;
        
        return one ;
    }
};
