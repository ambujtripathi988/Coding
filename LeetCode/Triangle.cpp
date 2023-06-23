
// https://leetcode.com/problems/triangle/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(vector<vector<int>>& tri , int n , int i , int j , vector<vector<int>>& dp)
    {
        // base cases
        if(i < 0 || j < 0 || j >= tri[i].size())
            return 1e7 ;

        if(i == n-1)
            return tri[i][j] ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        // return dp[i][j] = tri[i][j] + min( solveMem(tri , n , i+1 , j-1 , dp) , min( solveMem(tri , n , i+1 , j , dp) , solveMem(tri , n , i+1 , j+1 , dp) ) ) ;

        return dp[i][j] = tri[i][j] + min(solveMem(tri , n , i+1 , j , dp) , solveMem(tri , n , i+1 , j+1 , dp) ) ;
    }

    int minimumTotal(vector<vector<int>>& tri) 
    {
        int n = tri.size() ;

        // dp array 
        vector<vector<int>> dp(n+1 , vector<int>(n+1,-1) ) ;

        return solveMem(tri , n , 0 , 0 , dp) ;    
    }
};
