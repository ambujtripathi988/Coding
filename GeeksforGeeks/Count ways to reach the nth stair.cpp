
// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1

class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int mod = 1e9+7;
    
    int countWays(int n)
    {
        vector<int> dp(n+1,-1) ;
        
        return solveMem(n , dp) ;
    }
    
    int solveMem(int n,vector<int> &dp){
        if(n<0) return 0;
        if(n==0) return 1;
        
        if(dp[n]!=-1) return dp[n]%mod;
        
        dp[n] = (solveMem(n-1,dp)%mod + solveMem(n-2,dp)%mod)%mod;
        return dp[n]%mod;
    }
};
