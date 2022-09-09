
// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int zeros = 0 ;
        
        vector<int> ans ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]!=0)
                ans.push_back(nums[i]) ;
            else
                zeros ++ ;
        }
        
        while(zeros--)
            ans.push_back(0) ;
        
        nums.clear() ;
        
        for(int i = 0 ; i < ans.size() ; i++)
            nums.push_back(ans[i]) ;
    }
};
