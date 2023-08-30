
// https://practice.geeksforgeeks.org/problems/painting-the-fence3727/1

int const mod = 1000000007 ;

class Solution{
    public:
    
    long long int add(int a, int b)
    {
        return (a%mod + b % mod) % mod ;
    }
    
    long long int mul(int a, int b) 
    {
        return ((a%mod)*1LL * (b%mod)) % mod ;
    }
    
    long long int solveMem(int n, int k, vector<int> &dp) 
    {
        // base case 
        if(n == 1)
            return k ;
    
        if(n == 2)
            return add(k , mul(k,k-1) ) ;
    
        if(dp[n] != -1)
            return dp[n] ;
    
        dp[n] = add( mul(solveMem(n-2,k,dp) , k-1) , mul(solveMem(n-1,k,dp) , k-1 ) ) ;
    
        return dp[n] ;    
    }
    
    long long countWays(int n, int k)
    {
        // code here
        
        vector<int> dp(n+1,-1) ;
        
        return solveMem(n,k,dp) ;
    }
};
