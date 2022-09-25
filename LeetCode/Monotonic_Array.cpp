
// https://leetcode.com/problems/monotonic-array/

class Solution { 
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int flag1 = 0 , flag2 = 0 ;
        
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] <= nums[i+1])
                continue ;
            
            else
            {
                flag1 = 1 ;
                break ;
            }
        }
        
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            if(nums[i] >= nums[i+1])
                continue ;
            
            else
            {
                flag2 = 1;
                break ;
            }
        }
        
        if(flag1 == 1 && flag2 == 1)
            return false ;
        
        else 
            return true ;
    }
};
