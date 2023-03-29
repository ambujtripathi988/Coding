
// https://leetcode.com/problems/house-robber/description/

// Using DP(Recursion + Memoization)

class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size() ;

        vector<int> dp(n+1,-1) ;

        return solve(nums,n-1 ,dp) ;
    }

    int solve(vector<int> &nums , int n , vector<int> &dp)
    {
        if(n < 0)
            return 0 ;

        if(!n)
            return nums[0] ;

        if(dp[n] != -1)
            return dp[n] ;

        int incl = solve(nums,n-2,dp) + nums[n] ;
        int excl = solve(nums,n-1,dp) + 0 ;

        dp[n] = max(incl,excl) ;

        return dp[n] ; 
    }
};
