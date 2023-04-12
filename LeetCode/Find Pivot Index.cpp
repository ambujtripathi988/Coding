
// https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        if(nums.size() == 1)
            return 0 ;
            
        int sum = 0 , s = 0 ;

        for(int i = 0 ; i < nums.size() ; i++)
            sum += nums[i] ;

        if(s == sum - s - nums[0])
            return 0 ;
            
        for(int i = 0 ; i < nums.size()-1 ; i++)
        {
            s += nums[i] ;

            if(i < nums.size() && s == (sum - s - nums[i+1]) )
                return i + 1 ;
        }

        return -1 ;  
    }
};
