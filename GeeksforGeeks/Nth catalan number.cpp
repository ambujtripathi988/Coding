
// https://practice.geeksforgeeks.org/problems/nth-catalan-number0817/1

class Solution
{
    public:
    // recursion + memoization
    cpp_int solveMem(int n , vector<cpp_int>& dp)
    {
        if(n == 0 || n == 1)
            return 1 ;
            
        if(dp[n] != -1)
            return dp[n] ;
            
        cpp_int ans = 0 ;
        
        for(int i = 0 ; i < n ; i++)
            ans += solveMem(i , dp) * solveMem(n-i-1 , dp) ;
        
        return dp[n] = ans ;
    }
    
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        vector<cpp_int> dp(n+1 , -1) ;
        
        return solveMem(n , dp) ;
    }
};
