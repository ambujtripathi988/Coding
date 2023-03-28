
// https://leetcode.com/problems/coin-change/description/

// DP Tabulation Method    // Time Complexity : O(NxN)

class Solution {
public:
    int coinChange(vector<int>& coins, int amt) 
    {
        int ans = solve(coins,amt) ;

        if(ans == INT_MAX)
            return -1 ;

        return ans ;    
    }

    int solve(vector<int> &coins , int amt)
    {
        vector<int> dp(amt+1,INT_MAX) ;

        dp[0] = 0 ;

        for(int i = 1 ; i <= amt ; i++)
            for(int j = 0 ; j < coins.size() ; j++)
                if(i-coins[j] >= 0 && dp[i-coins[j]] != INT_MAX)
                    dp[i] = min(dp[i] , 1 + dp[i-coins[j]]) ;

        return dp[amt] ;
    }
};
