
// https://leetcode.com/problems/house-robber-ii/description/

class Solution {
public:

    int solveTabSpaceOpti(vector<int> nums) 
    {
        int n = nums.size() ;

        int prev1 = nums[0] ;
        int prev2 = 0 ;

        for (int i = 1; i < n; i++) 
        {
            int incl = prev2 + nums[i] ;
            int excl = prev1 + 0 ;

            int ans = max(incl,excl) ;

            // shifting logic
            prev2 = prev1 ;
            prev1 = ans ;
        }

        return prev1 ;
    }

    int rob(vector<int>& nums) 
    {
        int n = nums.size() ;

        if(n == 1)          // edge case 
            return nums[0] ;

        vector<int> first,second ;

        for(int i = 0 ; i < n ; i++)
        {
            if(i != n-1)
                first.push_back(nums[i]) ;

            if(i != 0)
                second.push_back(nums[i]) ;
        }

        return max(solveTabSpaceOpti(first) , solveTabSpaceOpti(second) ) ;
    }
};
