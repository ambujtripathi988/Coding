
// https://leetcode.com/problems/coin-change-ii/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int inde , int amt , vector<int>& coins , int n , vector<vector<int>>& dp)
    {
        // base case
        if(inde == n)
        {
            if(amt == 0)
                return 1 ;

            return 0 ;
        }

        if(dp[inde][amt] != -1)
            return dp[inde][amt] ;

        if(coins[inde] <= amt)
            return dp[inde][amt] = solveMem(inde , amt-coins[inde] , coins , n , dp) + solveMem(inde+1 , amt , coins , n , dp) ;

        else 
            return dp[inde][amt] = solveMem(inde+1 , amt , coins , n , dp) ;
    }

    int change(int amount, vector<int>& coins) 
    {
        int n = coins.size() ;

        // dp array
        vector<vector<int>> dp(n+1 , vector<int>(amount+1 , -1) ) ;
        
        return solveMem(0 , amount , coins , n , dp) ;
    }
};
