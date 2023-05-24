
// https://leetcode.com/problems/edit-distance/description/

class Solution {
public:
    //recursive solution will give TLE
    int solve(string &a , string &b , int i , int j)
    {
        // base case
        if(i == a.length())                 // a string ki length b string ke length se chhoti hai
            return b.length() - j ;

        if(j == b.length())                 // b string ki length a string ke length se chhoti hai
            return a.length() - i ; 

        int ans = 0 ; 

        if(a[i] == b[j])
            return solve(a , b , i+1 , j+1) ;

        else
        {
            // insert
            int insAns = 1 + solve(a , b , i , j+1) ;

            // delete
            int delAns = 1 + solve(a , b , i+1 , j) ;

            // replace
            int repAns = 1 + solve(a , b , i+1 , j+1) ;

            ans = min(insAns , min(delAns , repAns)) ;
        }

        return ans ;
    }

    // recursion + memoization
    int solveMem(string &a , string &b , int i , int j , vector<vector<int>>& dp)
    {
        // base case
        if(i == a.length())                 // a string ki length b string ke length se chhoti hai
            return b.length() - j ;

        if(j == b.length())                 // b string ki length a string ke length se chhoti hai
            return a.length() - i ; 

        if(dp[i][j] != -1)
            return dp[i][j] ;
            
        int ans = 0 ; 

        if(a[i] == b[j])
            return solveMem(a , b , i+1 , j+1 , dp) ;

        else
        {
            // insert
            int insAns = 1 + solveMem(a , b , i , j+1 , dp) ;

            // delete
            int delAns = 1 + solveMem(a , b , i+1 , j , dp) ;

            // replace
            int repAns = 1 + solveMem(a , b , i+1 , j+1 , dp) ;

            ans = min(insAns , min(delAns , repAns)) ;
        }

        return dp[i][j] = ans ;
    }

    // tabulation 
    int solveTab(string &a , string &b)
    {
        int n = a.length() , m = b.length() ;

        // dp array
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0) ) ;

        // base case analysis from memoization
        for(int j = 0 ; j < m ; j++)
            dp[n][j] = m - j ;

        for(int i = 0 ; i < n ; i++)
            dp[i][m] = n - i ;

        for(int i = n-1 ; i >= 0 ; i--)
        {
            for(int j = m-1 ; j >=0 ; j--)
            {
                int ans = 0 ; 

                if(a[i] == b[j])
                    ans = dp[i+1][j+1] ;

                else
                {
                    // insert
                    int insAns = 1 + dp[i][j+1] ;

                    // delete
                    int delAns = 1 + dp[i+1][j] ;

                    // replace
                    int repAns = 1 + dp[i+1][j+1] ;

                    ans = min(insAns , min(delAns , repAns)) ;
                }

                dp[i][j] = ans ;
            }
        }

        return dp[0][0] ;
    }

    int minDistance(string word1, string word2) 
    {
        // int n = word1.length() , m = word2.length() ;

        // // dp array
        // vector<vector<int>> dp(n+1 , vector<int>(m+1 , -1) ) ;

        // // return solve(word1 , word2 , 0 , 0) ;

        // return solveMem(word1 , word2 , 0 , 0 , dp) ;

        return solveTab(word1 , word2) ;
    }
};
