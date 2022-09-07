
// https://leetcode.com/problems/find-closest-number-to-zero/

class Solution { 
public:
    int findClosestNumber(vector<int>& nums) 
    {
        int minDist = nums[0] ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int n = abs(nums[i]) ;
            
            if(n < abs(minDist))
                minDist = nums[i] ;
            
            else if(n == abs(minDist))
                minDist = max(nums[i] , minDist) ;
            
            else if(n == 0)
                return 0 ;
        }    
        
        return minDist ;
    }
};
