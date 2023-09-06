
// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

class Solution{
public:

    // recursive solution will give TLE
    bool solve(int inde , int arr[] , int n , int tar)
    {
        // base case 
        if(inde >= n)
            return 0 ;
            
        if(tar < 0)
            return 0 ;
            
        if(tar == 0)
            return 1 ;
            
        bool incl = solve(inde+1 , arr , n , tar-arr[inde]) ;
        bool excl = solve(inde+1 , arr , n , tar) ;
        
        return incl or excl ;
    }
    
    // recursion + memoization
    bool solveMem(int inde , int arr[] , int n , int tar , vector<vector<int>>& dp)
    {
        // base case 
        if(inde >= n)
            return false;
            
        if(tar < 0)
            return false;
            
        if(tar == 0)    
            return true;
            
        if(dp[inde][tar] != -1)
            return dp[inde][tar] ;
            
        bool incl = solveMem(inde+1 , arr , n , tar-arr[inde] , dp) ;
        bool excl = solveMem(inde+1 , arr , n , tar , dp) ;
        
        return dp[inde][tar] = incl or excl ;
    }
    
    // tabulation
    bool solveTab(int n , int arr[] , int total)
    {
        vector<vector<int>> dp(n+1 , vector<int> (total+1,0)) ;
        
        //base case anlysis from memoization
        for(int i = 0 ; i <= n ; i++)
            dp[i][0] = 1 ;
            
        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int tar = 0 ; tar <= total ; tar++)
            {
                bool incl = 0 ;
                
                if(tar-arr[inde] >= 0)
                    incl = dp[inde+1][tar-arr[inde]] ;
                    
                bool excl = dp[inde+1][tar-0] ;
                
                dp[inde][tar] = incl or excl ;
            }
        }
        
        return dp[0][total] ;
    }
    
    // space optimized
    bool spaceOpti(int n , int arr[] , int total)
    {
        vector<int> curr(total+1 , 0) ; 
        vector<int> next(total+1 , 0) ; 
        
        //base case anlysis from memoization
        curr[0] = 1 ;
        next[0] = 1 ;
            
        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int tar = 0 ; tar <= total ; tar++)
            {
                bool incl = 0 ;
                
                if(tar-arr[inde] >= 0)
                    incl = next[tar-arr[inde]] ;
                    
                bool excl = next[tar-0] ;
                
                curr[tar] = incl or excl ;
            }
            
            next = curr ;
        }
        
        return next[total] ;
    }
        
    int equalPartition(int N, int arr[])
    {
        int sum = 0 ; 
        
        for(int i = 0 ; i < N ; i++)
            sum += arr[i] ;
            
        if(sum % 2)             // odd sum
            return 0;
        
        sum /= 2;
            
        // return solve(0 , arr , N , sum) ;
        
        // vector<vector<int>> dp(N+1, vector<int>(sum+1, -1)) ;
        
        // return solveMem(0 , arr , N , sum , dp) ;
        
        // return solveTab(N , arr , sum) ;
        
        return spaceOpti(N , arr , sum) ;
    }

};
