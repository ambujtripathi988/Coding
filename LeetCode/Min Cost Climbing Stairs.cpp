
// https://leetcode.com/problems/min-cost-climbing-stairs/description/

// Method 1 : Top-Down Approach(Recursion + Memoization)

// Time Complexity : O(N)   // Space Complexity : O(N+N)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;
        
        // step1
        vector<int> dp(n+1,-1) ;

        int ans = min(solve(cost , n-1 , dp) , solve(cost , n-2 , dp)) ;

        return ans ;
    }

    int solve(vector<int> &cost , int n , vector<int> &dp)
    {
        if(n == 0)
            return cost[0] ;

        else if(n == 1)
            return cost[1] ;

        // step3
        if(dp[n] != -1)
            return dp[n] ;

        // step2 
        dp[n] = cost[n] + min( solve(cost,n-1,dp) , solve(cost,n-2,dp)) ;

        return dp[n] ;
    }
};


// Method 2 : Bottom-Up Approach(Tabulation)

// Time Complexity : O(N)   // Space Complexity : O(N)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;
        
        return solve(cost,n) ;
    }

    int solve(vector<int> &cost , int n)
    {
        // step 1 : creation of dp array
        vector<int> dp(n+1) ;

        // step 2 : base case analysis
        dp[0] = cost[0] ;
        dp[1] = cost[1] ;

        // step 3
        for(int i = 2 ; i < n ; i++)
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]) ;

        return min(dp[n-1],dp[n-2]) ;
    }
};


// Method 3 : Bottom-Up Approach(Tabulation)

// Time Complexity : O(N)   // Space Complexity : O(1)

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size() ;
        
        return solve(cost,n) ;
    }

    int solve(vector<int> &cost , int n)
    {
        int prev2 = cost[0] ;
        int prev1 = cost[1] ;

        for(int i = 2 ; i < n ; i++)
        {
            int curr = cost[i] + min(prev1,prev2) ;

            prev2 = prev1 ;
            prev1 = curr ;    
        }

        return min(prev1,prev2) ;
    }
};
