
// https://leetcode.com/problems/perfect-squares/description/

class Solution {
public:

    // recursion + memoization
    int solveMem(int n , vector<int>& dp)
    {
        // base case 
        if(n == 0)
            return 0 ;
            
        if(dp[n] != -1)
            return dp[n] ;
            
        int ans = n ;
        
        for(int i = 1 ; i*i <= n ; i++)
            ans = min(ans, 1 + solveMem(n-i*i , dp)) ;
            
        dp[n] = ans ;
        
        return dp[n] ;
    }

    int numSquares(int n) 
    {
        vector<int> dp(n+1,-1) ;

        return solveMem(n , dp) ;    
    }
};
