
// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/

class Solution {
public: 
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        int sum = 0 , i = 0 , len = nums.size() ;
        
        sort(nums.begin() , nums.end()) ;
        
        while(nums[i] < 0 && i < len)
        {
            if(k <= 0)
                break ;
            
            nums[i] *= -1 ;
            i++ ;
            k-- ;
        }
        
        sort(nums.begin() , nums.end()) ;
        
        if(k > 0 && nums[0] != 0)
            if(k % 2)                   // odd
                nums[0] *= -1 ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            sum += nums[i] ;
        
        return sum ;
    } 
};
