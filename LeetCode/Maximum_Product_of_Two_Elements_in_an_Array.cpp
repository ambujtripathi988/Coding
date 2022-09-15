
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxi = *max_element(nums.begin() , nums.end()) ;
        
        vector<int> arr ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            if(nums[i] != maxi)
                arr.push_back(nums[i]) ;
        
        if(arr.size() <= nums.size() - 2)
            return ((maxi-1) * (maxi-1)) ;
        
        int maxi2 = *max_element(arr.begin() , arr.end()) ;
        
        return ((maxi-1) * (maxi2-1)) ;
    }
};
