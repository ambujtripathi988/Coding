
// https://leetcode.com/problems/target-sum/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(vector<int>& nums , int tar , int total , int inde , vector<vector<int>>& dp)
    {
        int n = nums.size() ;

        // base case 
        if(inde == n )
        {
            if(total == tar)
                return 1 ;
            
            return 0 ;
        }

        if(dp[inde][total+1000] != -1)
            return dp[inde][total+1000] ;

        int ans = solveMem(nums , tar , total + nums[inde] , inde + 1 , dp) + solveMem(nums, tar , total-nums[inde] , inde + 1 , dp) ;

        return dp[inde][total+1000] = ans ;
    }

    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int n = nums.size() ;

        // dp array
        vector<vector<int>> dp (n+1 , vector<int> (2000 ,-1) ) ;

        return solveMem(nums , target , 0 , 0 , dp) ;    
    }
};
