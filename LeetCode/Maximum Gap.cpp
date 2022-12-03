
// https://leetcode.com/problems/maximum-gap/

class Solution { 
public:
    int maximumGap(vector<int>& nums) 
    {
        if(nums.size() < 2)
            return 0 ;
        
        sort(nums.begin() , nums.end()) ;           // set takes more time for soritng
        
        int diff = -1 ;
        
        for(int i = 1 ; i < nums.size() ; i++)
            diff = max( diff , abs(nums[i] - nums[i-1]) ) ;
        
        return diff ;
    }
};
