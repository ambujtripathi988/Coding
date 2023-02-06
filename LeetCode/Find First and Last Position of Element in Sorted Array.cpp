
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if(!nums.size())
            return {-1,-1} ;

        vector<int> ans ;
        
        int f = -1 , l = -1 ;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == target )
            {    
                f = i ;
                break ;    
            }
        }

        for(int i = f ; i < nums.size() ; i++)
            if(nums[i] == target)
                l = i ;

        ans.push_back(f) ;
        ans.push_back(l) ;
    
        return ans ;
    }
};
