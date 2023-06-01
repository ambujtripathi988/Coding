
// https://leetcode.com/problems/unique-paths-ii/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int m , int n  , int i , int j , vector<vector<int>>& dp , vector<vector<int>>& obs)
    {
        // base case
        if(i >= m || j >= n)
            return 0 ;

        if(i == m-1 && j == n-1)
            return 1 ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        int count = 0 ;

        int bottom = 0 , right = 0 ;

        if(i+1 < m && !obs[i+1][j])
            bottom = solveMem(m , n , i+1 , j , dp , obs) ;

        if(j+1 < n && !obs[i][j+1])
            right = solveMem(m , n , i , j+1 , dp , obs) ;

        count += bottom + right ;

        return dp[i][j] = count ;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obs) 
    {
        int m = obs.size() ;
        if (m == 0) return 0;
        int n = obs[0].size() ;
        if (n == 0) return 0;

        // check if starting cell is an obstacle
        if (obs[0][0] == 1) return 0;

        // dp array
        vector<vector<int>> dp(m , vector<int>(n , -1) ) ;

        return solveMem(m , n , 0 , 0 , dp , obs) ;      
    }
};
