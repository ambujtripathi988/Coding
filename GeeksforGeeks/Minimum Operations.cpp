
// https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

class Solution
{
  public:
    int dp[100010] ;
    
    int solveMem(int i , int n)
    {
        if(i == n)
            return 0 ; 
            
        if(i > n)
            return 1e8 ;
            
        if(dp[i] != -1)
            return dp[i] ;
            
        int ans = 1 + min( solveMem(i+1 , n) , solveMem(i*2 , n) ) ;
        
        return dp[i] = ans ;
    }
    
    int minOperation(int n)
    {
        if(n == 1)
            return 1 ;
            
        if(n == 2)
            return 2 ;
            
        memset(dp , -1 , sizeof(dp)) ;
        
        int ans = 2 + solveMem(2 , n) ;
        
        return ans ;
    }
};
