
// https://leetcode.com/problems/minimum-falling-path-sum/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int i , int j , vector<vector<int>>& mat , vector<vector<int>>& dp)
    {
        // base case
        if(j < 0 || j >= mat.size())
            return 1e5 ;

        if(i < 0 || i >= mat.size())
            return 1e5 ;

        if(i == 0)
            return mat[i][j] ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        int up = mat[i][j] + solveMem(i-1 , j , mat , dp) ;

        int Dleft = mat[i][j] + solveMem(i-1 , j-1 , mat , dp) ;

        int Dright = mat[i][j] + solveMem(i-1 , j+1 , mat , dp) ;

        return dp[i][j] = min (up , min(Dleft , Dright) ) ;
    } 

    int minFallingPathSum(vector<vector<int>>& mat) 
    {
        int n = mat.size() ;

        // dp array 
        vector<vector<int>> dp(n , vector<int>(n, -1) ) ;

        int no = INT_MAX ;

        for(int j = 0 ; j < n ; j++)
            no = min( no , solveMem(n-1 , j , mat , dp) ) ;

        return no ;    
    }
};
