
// https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1

class Solution{
public:

    // recursive function will give TLE
    int solve(vector<vector<int>> mat , int i , int j , int & maxi)
    {
        // base case 
        if(i >= mat.size() || j >= mat.size())
            return 0 ;
            
        int right = solve(mat , i , j+1 , maxi) ;
        
        int diagonal = solve(mat , i+1 , j+1 , maxi) ;
        
        int down = solve(mat , i+1 , j , maxi) ;
        
        if(mat[i][j] == 1)
        {
            int ans = 1 + min(right , min(down , diagonal)) ;
            
            maxi = max(maxi , ans) ;
            
            return maxi ;
        }
        
        else 
            return 0 ;
    } 
    
    // recursion + memoization
    int solveMem(vector<vector<int>>& mat , int i , int j , int & maxi , vector<vector<int>>& dp, int n, int m)
    {
        // base case 
        if(i >= n || j >= m)
            return 0 ;
            
        if(dp[i][j] != -1)
            return dp[i][j] ;
            
        int right = solveMem(mat , i , j+1 , maxi , dp, n, m) ;
        
        int diagonal = solveMem(mat , i+1 , j+1 , maxi , dp, n, m) ;
        
        int down = solveMem(mat , i+1 , j , maxi , dp, n, m) ;
        
        if(mat[i][j] == 1)
        {
            int ans = 1 + min(right , min(down , diagonal)) ;
            
            maxi = max(maxi , ans) ;
            
            dp[i][j] = ans ;
            
            return dp[i][j] ;
        }
        
        else 
            return dp[i][j] = 0 ;
    } 
    
    // Tabulation
    int solveTab(vector<vector<int>>& mat , int & maxi)
    {
        int row = mat.size() , col = mat[0].size() ;
        
        // dp array creation
        vector<vector<int>> dp(row+1 , vector<int> (col+1,0)) ;
        
        for(int i = row-1 ; i >= 0 ; i--)
        {
            for(int j = col-1 ; j >= 0 ; j--)
            {
                int right = dp[i][j+1] ;
        
                int diagonal = dp[i+1][j+1] ;
                
                int down = dp[i+1][j] ;
                
                if(mat[i][j] == 1)
                {
                    dp[i][j] = 1 + min(right , min(down , diagonal)) ;
                    
                    maxi = max(maxi , dp[i][j]) ;
                }
                
                else 
                    dp[i][j] = 0 ;
            }
        }
        
        return dp[0][0] ;
    }
    
    //space optimize 
    int spaceOpti(vector<vector<int>>& mat , int & maxi)
    {
        int row = mat.size() , col = mat[0].size() ;
        
        vector<int> curr(col+1 ,0) ;
        vector<int> next(col+1 ,0) ;
        
        for(int i = row-1 ; i >= 0 ; i--)
        {
            for(int j = col-1 ; j >= 0 ; j--)
            {
                int right = curr[j+1] ;
        
                int diagonal = next[j+1] ;
                
                int down = next[j] ;
                
                if(mat[i][j] == 1)
                {
                    curr[j] = 1 + min(right , min(down , diagonal)) ;
                    
                    maxi = max(maxi , curr[j]) ;
                }
                
                else 
                    curr[j] = 0 ;
            }
            
            next = curr ;
        }
        
        return next[0] ;
    } 
    
    int maxSquare(int n, int m, vector<vector<int>> mat)
    {
        // int maxi = 0 ;
        
        // vector<vector<int>> dp(n , vector<int> (m,-1)) ;
        
        // solveMem(mat , 0 , 0 , maxi , dp, n, m) ;
        
        // return maxi ;
        
        // int maxi = 0 ;
        
        // solveTab(mat , maxi) ;
        
        // return maxi ;
        
        int maxi = 0 ;
        
        spaceOpti(mat , maxi) ;
        
        return maxi ;
    }

};
