
// https://leetcode.com/problems/max-consecutive-ones/ 

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int count = 0 , n = nums.size() ;
        int maxi = 0 ;
        
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] == 1)
            {
                count ++ ;
                
                if(count > maxi)
                    maxi = count ;
            }
            
            else
                count = 0 ;
        } 
        
        return maxi ;
    }
};
