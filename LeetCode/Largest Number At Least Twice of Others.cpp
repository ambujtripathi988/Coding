
// https://leetcode.com/problems/largest-number-at-least-twice-of-others/

class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int maxi = *max_element(nums.begin() , nums.end()) ;
        
        bool flag = false ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != maxi)
            {
                if(nums[i] * 2 > maxi)
                {
                    flag = true ;
                    break ;
                }
            }
        }
        
        if(flag)
            return -1 ;
        
        else
        {
            int inde = -1 ;
            
            for(int i = 0; i < nums.size() ; i++)
            {
                if(nums[i] == maxi)
                {
                    inde = i ;
                    break ;
                }
            }
            
            return inde ; 
        }
    }
};
