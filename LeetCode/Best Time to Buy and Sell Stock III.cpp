
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/

class Solution {
public:

    // recursion + memoization
    int solveMem(int inde , int buy , vector<int>& prices , int limit , vector<vector<vector<int>>>& dp)
    {
        // base case 
        if(inde == prices.size())
            return 0 ;

        if(limit == 0)
            return 0 ;

        if(dp[inde][buy][limit] != -1)
            return dp[inde][buy][limit] ;

        int profit = 0 ;

        if(buy)
        {
            int buykro = -prices[inde] + solveMem(inde+1 , 0 , prices , limit , dp) ;
            
            int skipkro = 0 + solveMem(inde+1 , 1 , prices , limit , dp) ;

            profit = max(buykro , skipkro) ;
        }

        else
        {
            int sellkro = prices[inde] + solveMem(inde+1 , 1 , prices , limit-1 , dp) ;

            int skipkro = 0 + solveMem(inde+ 1 , 0 , prices , limit , dp) ;

            profit = max(sellkro , skipkro) ;
        }

        return dp[inde][buy][limit] = profit ;
    }

    // tabulation
    int solveTab(vector<int>& prices)
    {
        int n = prices.size() ;

        // 3-D DP Array
        vector<vector<vector<int>>> dp(n+1 , vector<vector<int>> (2,vector<int> (3 , 0) ) ) ;

        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int buy = 0 ; buy <= 1 ; buy++)
            {
                for(int limit = 1 ; limit <= 2 ; limit++)
                {
                    int profit = 0 ;

                    if(buy)
                    {
                        int buykro = -prices[inde] + dp[inde+1][0][limit] ;
                        
                        int skipkro = 0 + dp[inde+1][1][limit] ;

                        profit = max(buykro , skipkro) ;
                    }

                    else
                    {
                        int sellkro = prices[inde] + dp[inde+1][1][limit-1] ;

                        int skipkro = 0 + dp[inde+1][0][limit] ;

                        profit = max(sellkro , skipkro) ;
                    }

                    dp[inde][buy][limit] = profit ;
                }
            }
        }

        return dp[0][1][2] ;
    }

    // space optimization
    int spaceOpti(vector<int>& prices)
    {
        int n = prices.size() ;

        vector<vector<int>> curr(2 , vector<int>(3,0) ) ;
        vector<vector<int>> next(2 , vector<int>(3,0) ) ;

        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int buy = 0 ; buy <= 1 ; buy++)
            {
                for(int limit = 1 ; limit <= 2 ; limit++)
                {
                    int profit = 0 ;

                    if(buy)
                    {
                        int buykro = -prices[inde] + next[0][limit] ;
                        
                        int skipkro = 0 + next[1][limit] ;

                        profit = max(buykro , skipkro) ;
                    }

                    else
                    {
                        int sellkro = prices[inde] + next[1][limit-1] ;

                        int skipkro = 0 + next[0][limit] ;

                        profit = max(sellkro , skipkro) ;
                    }

                    curr[buy][limit] = profit ;
                }
            }

            next = curr ;
        }

        return next[1][2] ;
    }

    int maxProfit(vector<int>& prices) 
    {
        // int n = prices.size() ;

        // // 3-D DP Array
        // vector<vector<vector<int>>> dp(n+1 , vector<vector<int>> (2,vector<int> (3 , -1) ) ) ;

        // return solveMem(0 , 1 , prices , 2 , dp) ;

        // return solveTab(prices) ;

        return spaceOpti(prices) ;
    }
};
