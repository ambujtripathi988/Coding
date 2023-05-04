
// https://leetcode.com/problems/minimum-cost-for-tickets/description/

class Solution {
public:
    // recursive function will give TLE
    int solve(int n, vector<int> &days, vector<int> &cost, int inde) 
    {
        // base case 
        if(inde >= n)
            return 0 ;

        // 1 day pass 
        int opt1 = cost[0] + solve(n , days , cost , inde + 1) ;

        int i ;

        // 7 days pass
        for(i = inde ; i < n && days[i] < days[inde]+7 ; i++) ;

        int opt2 = cost[1] + solve(n , days , cost , i) ;

        // 30 days pass
        for(i = inde ; i < n && days[i] < days[inde]+30 ; i++) ;

        int opt3 = cost[2] + solve(n , days , cost , i) ;

        return min(opt1, min(opt2,opt3) ) ;
    }

    // recursion + memoiztion
    int solveMem(int n, vector<int> &days, vector<int> &cost, int inde , vector<int>& dp) 
    {
        // base case 
        if(inde >= n)
            return 0 ;

        if(dp[inde] != -1)
            return dp[inde] ;

        // 1 day pass 
        int opt1 = cost[0] + solveMem(n , days , cost , inde + 1 , dp) ;

        int i ;

        // 7 days pass
        for(i = inde ; i < n && days[i] < days[inde]+7 ; i++) ;

        int opt2 = cost[1] + solveMem(n , days , cost , i , dp) ;

        // 30 days pass
        for(i = inde ; i < n && days[i] < days[inde]+30 ; i++) ;

        int opt3 = cost[2] + solveMem(n , days , cost , i , dp) ;

        dp[inde] = min(opt1, min(opt2,opt3) ) ;

        return dp[inde] ;
    }

    // Tabulation
    int solveTab(int n, vector<int> &days, vector<int> &cost) 
    {
        vector<int> dp(n+1, INT_MAX) ;

        // base case in dp array
        dp[n] = 0 ;

        for(int k = n -1 ; k >= 0 ; k--)
        {
            // 1 day pass 
            int opt1 = cost[0] + dp[k+1] ;

            int i ;

            // 7 days pass
            for(i = k ; i < n && days[i] < days[k]+7 ; i++) ;

            int opt2 = cost[1] + dp[i] ;

            // 30 days pass
            for(i = k ; i < n && days[i] < days[k]+30 ; i++) ;

            int opt3 = cost[2] + dp[i] ;

            dp[k] = min(opt1, min(opt2,opt3) ) ;
        }

        return dp[0] ;
    }

    int mincostTickets(vector<int>& days, vector<int>& cost) 
    {
        int n = days.size() ;

        // return solve(n , days , cost , 0) ;    

        // vector<int> dp(n+1 , -1) ;

        // return solveMem(n , days , cost , 0 , dp) ;

        return solveTab(n , days , cost) ;
    }
};
