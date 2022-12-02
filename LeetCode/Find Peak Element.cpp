
// https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int maxi = *max_element(nums.begin() , nums.end()) ;
        
        if(maxi == nums[0])
            return 0 ;
        
        else if(maxi == nums[nums.size() - 1])
            return nums.size() - 1 ;
        
        int inde = 0 ; 
        
        for(int i = 1 ; i < nums.size()-1 ; i++)
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
                inde = i ;
        
        return inde ;
    }
};
