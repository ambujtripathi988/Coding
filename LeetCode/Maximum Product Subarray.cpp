
// https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int pro = 1 ; 
        
        int maxi = INT_MIN ;
        
        // kadane's algo
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            pro *= nums[i] ;
            
            maxi = max(maxi,pro) ;
            
            if(pro == 0)
                pro = 1 ;
        }
        
        pro = 1 ;
        
        for(int i = nums.size() - 1 ; i >= 0 ; i--)
        {
            pro *= nums[i] ;
            
            maxi = max(maxi , pro) ;
            
            if(pro == 0)
                pro = 1 ;
        }
        
        return maxi ;
    }
};
