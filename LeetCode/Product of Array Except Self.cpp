
// https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    { 
        int pre = 1 , post = 1 ;
        
        int sizee = nums.size() - 1 ;
        
        vector<int> ans(nums.size(),0) ;
        
        for(int i = 0 ; i <= sizee ; i++)
        {
            ans[i] = pre ;
            pre *= nums[i] ;
        }
        
        for(int i = sizee ; i>= 0 ; i--) 
        {
            ans[i] *= post ;
            post *= nums[i] ;
        }
        
        return ans ;
    }
};
