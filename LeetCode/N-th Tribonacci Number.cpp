
// https://leetcode.com/problems/n-th-tribonacci-number/description/

class Solution {
public:

    // simple recursive function will give TLE
    int trib(int n)
    {
        // base case 
        if(n == 0)
            return 0 ;
        
        if(n == 1 || n == 2)
            return 1 ;

        return trib(n-1) + trib(n-2) + trib(n-3) ;
    }

    int tribMem(int n , vector<int> &dp)
    {
        // base case 
        if(n == 0)
            return 0 ;
        
        if(n == 1 || n == 2)
            return 1 ;

        if(dp[n] != -1)
            return dp[n] ;

        dp[n] = tribMem(n-1 , dp) + tribMem(n-2 , dp) + tribMem(n-3 , dp) ;

        return dp[n] ;
    }

    int tribTab(int n)
    {
        vector<int> dp(n+1) ;

        // base case 
        if(n == 0)
            return 0 ;
        
        if(n == 1 || n == 2)
            return 1 ;

        // base case storation in dp array
        dp[0] = 0 ;
        dp[1] = 1 ;
        dp[2] = 1 ;

        for(int i = 3 ; i <= n ; i++)
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3] ;

        return dp[n] ;
    }

    int spaceOpti(int n)
    {
        // base case 
        if(n == 0)
            return 0 ;
        
        if(n == 1 || n == 2)
            return 1 ;

        int prev3 = 0 ;
        int prev2 = 1 ;
        int prev1 = 1 ;

        for(int i = 3 ; i <= n ;i++)
        {
            int ans = prev1 + prev2 + prev3 ;

            // shifting logic 
            prev3 = prev2 ;
            prev2 = prev1 ;
            prev1 = ans ;
        }

        return prev1 ;
    }

    int tribonacci(int n) 
    {
        // vector<int> dp(n+1 ,-1) ;

        // return tribMem(n,dp) ;

        // return tribTab(n) ;

        return spaceOpti(n) ;
    }
};
