
// https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1

//User function template for C++
class Solution{
public: 
    // recursion + memoization
    int solveMem(int *arr , int inde , vector<int>& dp, int n)
    {
        // base case
        if(inde >= n)
            return 0 ;
            
        if(dp[inde] != -1)
            return dp[inde] ;
            
        int pick = 0 ;
        
        pick = arr[inde] + solveMem(arr , inde+2 , dp , n) ;
        
        int not_pick = 0 + solveMem(arr , inde+1 , dp , n) ;
        
        return dp[inde] = max(pick , not_pick) ;
    }  

    // tabulation
    int solveTab(int *arr , int n)
    {
        // dp array
        vector<int> dp(n+2 , 0) ;
        
        for(int inde = n-1 ; inde >=0 ; inde--)
        {
            int pick = 0 ;
            
            pick = arr[inde] + dp[inde+2] ;
        
            int not_pick = 0 + dp[inde+1] ;
            
            dp[inde] = max(pick , not_pick) ;
        }
        
        return dp[0] ;
    }
    
    // space optimized
    int spaceOpti(int *arr, int n)
    {
        if (n == 0)
            return 0;
    
        int prev = 0;
        int next = arr[n - 1];
    
        for (int inde = n - 2; inde >= 0; inde--)
        {
            int pick = 0;
            
            pick = arr[inde] + prev;
            
            int not_pick = next;
            int ans = max(pick, not_pick);
            
            // shifting logic
            prev = next;
            next = ans;
        }
    
        return next;
    }

    // calculate the maximum sum with out adjacent
    int findMaxSum(int *arr, int n) 
    {
        // dp array
       // vector<int> dp(n+1 , -1) ;
        
       // return solveMem(arr , 0 , dp , n) ;
       
       //return solveTab(arr , n) ;
       
       return spaceOpti(arr , n) ;
    }
};
