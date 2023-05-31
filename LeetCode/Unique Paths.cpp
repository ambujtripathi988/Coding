
// https://leetcode.com/problems/unique-paths/description/

class Solution {
public:
    // recursion solution will give TLE
    int solve(int m , int n  , int i , int j)
    {
        // base case
        if(i > m || j > n)
            return 0 ;

        if(i == m && j == n)
            return 1 ;

        int count = 0 ;

        count += solve(m , n , i+1 , j) + solve(m , n , i , j+1) ;

        return count ;
    }

    // recursion + memoization
    int solveMem(int m , int n  , int i , int j , vector<vector<int>>& dp)
    {
        // base case
        if(i > m || j > n)
            return 0 ;

        if(i == m && j == n)
            return 1 ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        int count = 0 ;

        count += solveMem(m , n , i+1 , j , dp) + solveMem(m , n , i , j+1 , dp) ;

        return dp[i][j] = count ;
    }

    // tabulation
    int solveTab(int m , int n)
    {
        // dp array
        vector<vector<int>> dp(m+1 , vector<int> (n+1 ,0) ) ;

        // base case analysis from memoization
        dp[m-1][n-1] = 1 ;

        for(int i = m-1 ; i >= 0 ; i--)
        {
            for(int j = n-1 ; j >= 0 ; j--)
            {
                if(i == m-1 && j == n-1) 
                    continue;

                dp[i][j] = dp[i+1][j] + dp[i][j+1] ;
            }
        }

        return dp[0][0] ;
    }

    int uniquePaths(int m, int n) 
    {
        // return solve(m-1 , n-1 , 0 , 0) ;

        // dp array
        // vector<vector<int>> dp(m+1 , vector<int>(n+1 , -1) ) ;

        // return solveMem(m-1 , n-1 , 0 , 0 , dp ) ;  

        return solveTab(m , n) ;  
    }
};
