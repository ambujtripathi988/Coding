
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

class Solution {
public:
    // recursive solution wil give TLE
    int solve(int inde , int buy , vector<int>& prices)
    {
        // base case 
        if(inde == prices.size())
            return 0 ;

        int profit = 0 ;

        if(buy)
        {
            int buykro = -prices[inde] + solve(inde+1 , 0 , prices) ;
            
            int skipkro = 0 + solve(inde+1 , 1 , prices) ;

            profit = max(buykro , skipkro) ;
        }

        else
        {
            int sellkro = prices[inde] + solve(inde+1 , 1 , prices) ;

            int skipkro = 0 + solve(inde+ 1 , 0 , prices) ;

            profit = max(sellkro , skipkro) ;
        }

        return profit ;
    }

    // recursion + memoization
    int solveMem(int inde , int buy , vector<int>& prices , vector<vector<int> >& memo)
    {
        // base case 
        if(inde == prices.size())
            return 0 ;

        if(memo[inde][buy] != -1)
            return memo[inde][buy] ;

        int profit = 0 ;

        if(buy)
        {
            int buykro = -prices[inde] + solveMem(inde+1 , 0 , prices , memo) ;
            
            int skipkro = 0 + solveMem(inde+1 , 1 , prices , memo) ;

            profit = max(buykro , skipkro) ;
        }

        else
        {
            int sellkro = prices[inde] + solveMem(inde+1 , 1 , prices , memo) ;

            int skipkro = 0 + solveMem(inde+ 1 , 0 , prices , memo) ;

            profit = max(sellkro , skipkro) ;
        }

        return memo[inde][buy] = profit ;
    }

    // tabulation
    int solveTab(vector<int>& prices)
    {
        int n = prices.size() ;

        vector<vector<int>> dp(n+1 , vector<int> (2 , 0)) ;

        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int buy = 0 ; buy <= 1 ; buy++)
            {
                int profit = 0 ;

                if(buy)
                {
                    int buykro = -prices[inde] + dp[inde+1][0] ;
                    
                    int skipkro = 0 + dp[inde+1][1] ;

                    profit = max(buykro , skipkro) ;
                }

                else
                {
                    int sellkro = prices[inde] + dp[inde+1][1] ;

                    int skipkro = 0 + dp[inde+1][0] ;

                    profit = max(sellkro , skipkro) ;
                }

                dp[inde][buy] = profit ;
            }
        }

        return dp[0][1] ;
    }

    // space optimize
    int spaceOpti(vector<int>& prices)
    {
        int n = prices.size() ;

        vector<int> curr (2,0) ;
        vector<int> next (2,0) ;

        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int buy = 0 ; buy <= 1 ; buy++)
            {
                int profit = 0 ;

                if(buy)
                {
                    int buykro = -prices[inde] + next[0] ;
                    
                    int skipkro = 0 + next[1] ;

                    profit = max(buykro , skipkro) ;
                }

                else
                {
                    int sellkro = prices[inde] + next[1] ;

                    int skipkro = 0 + next[0] ;

                    profit = max(sellkro , skipkro) ;
                }

                curr[buy] = profit ;
            }

            next = curr ;       // change are copied after every iteration
        }

        return next[1] ;
    }

    int maxProfit(vector<int>& prices) 
    {
        // return solve(0 , 1 , prices) ;   

        // int n = prices.size() ;

        // vector<vector<int> > memo(n+1 , vector<int> (2,-1) ) ;

        // return solveMem(0 , 1 , prices , memo) ; 

        // return solveTab(prices) ;

        return spaceOpti(prices) ;
    }
};
