
// https://leetcode.com/problems/minimum-falling-path-sum-ii/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(vector<vector<int>>& mat , int i , int j , vector<vector<int>>& dp)
    {
        int n = mat.size() ;

        if(i == n-1)
            return mat[i][j] ;

        if(i >= n || j >= n || i < 0 || j < 0)
            return INT_MAX ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        int ans = INT_MAX ;

        for(int k = 0 ; k < n ; k++)
            if(k != j)                 //Constraint for neglecting the cell directly below the current cell
                ans = min(ans , mat[i][j] + solveMem(mat , i+1 , k , dp)) ;

        return dp[i][j] = ans ;
    } 

    int minFallingPathSum(vector<vector<int>>& mat) 
    {
        int n = mat.size() ;

        // dp array 
        vector<vector<int>> dp(n+1 , vector<int>(n+1, -1) ) ;

        int no = INT_MAX ;

        for(int j = 0 ; j < n ; j++)
            no = min( no , solveMem(mat , 0 , j , dp) ) ;

        return no ;        
    }
};
