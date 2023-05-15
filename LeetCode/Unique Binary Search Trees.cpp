
// https://leetcode.com/problems/unique-binary-search-trees/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int n , vector<int>& dp)
    {
        // base case 
        if(n <= 1)
            return 1 ;

        if(dp[n] != -1)
            return dp[n] ;

        int ans = 0 ; 

        // taking i as root node each time
        for(int i = 1 ; i <= n ; i++)
            ans += solveMem(i-1, dp) * solveMem(n-i , dp) ;

        return dp[n] = ans ;
    }

    // tabulation
    int solveTab(int n)
    {
        vector<int> dp(n+1 ,0) ;

        // base case analysis from memoization
        dp[0] = dp[1] = 1 ;

        // i is number of nodes
        for(int i = 2 ; i <= n ; i++)
        {
            // j -> root node
            for(int j = 1 ; j <= i ; j++)    
                dp[i] += dp[j-1] * dp[i-j] ;
        }

        return dp[n] ;
    }

    int numTrees(int n) // can be solved using catalan number
    {
        // vector<int> dp (n+1 , -1) ;

        // return solveMem(n , dp) ;

        return solveTab(n) ;
    }
};
