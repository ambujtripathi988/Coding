
// https://leetcode.com/problems/minimum-path-sum/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(vector<vector<int>>& mat , int i , int j , vector<vector<int>>& dp)
    {
        // base case
        if(i == 0 && j == 0)
            return mat[i][j] ;

        if(i < 0 || j < 0)          // element exist hi nhi krta
            return INT_MAX ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        return dp[i][j] = mat[i][j] + min( solveMem(mat , i-1 , j , dp) , solveMem(mat , i , j-1 , dp) ) ;
    }

    // tabulation
    int solveTab(vector<vector<int>>& mat)
    {
        int m = mat.size() ;
        int n = mat[0].size() ;

        // dp array
        vector<vector<int>> dp(m+1 , vector<int> (n+1 , 0)) ;

        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(i == 0 && j == 0)
                    dp[i][j] = mat[i][j] ;

                else
                {
                    int a = INT_MAX , b = INT_MAX ;

                    if(i > 0)
                        a = dp[i-1][j] ;

                    if(j > 0)
                        b = dp[i][j-1] ;

                    dp[i][j] = mat[i][j] + min(a,b) ;
                }
            }
        }

        return dp[m-1][n-1] ;
    }

    int minPathSum(vector<vector<int>>& mat)        // can also be done using cumulative sum in given matrix
    {
        // int m = mat.size() ;
        // int n = mat[0].size() ;

        // // dp array
        // vector<vector<int>> dp(m+1 , vector<int> (n+1 , -1)) ;

        // return solveMem(mat , m-1 , n-1 , dp) ;

        return solveTab(mat) ;
    }
};
