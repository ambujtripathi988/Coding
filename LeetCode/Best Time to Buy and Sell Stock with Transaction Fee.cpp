
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/description/

class Solution {
public:
    // space optimize
    int spaceOpti(vector<int>& prices , int fee)
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
                    int sellkro = prices[inde] + next[1] -fee ;

                    int skipkro = 0 + next[0] ;

                    profit = max(sellkro , skipkro) ;
                }

                curr[buy] = profit ;
            }

            next = curr ;       // change are copied after every iteration
        }

        return next[1] ;
    }

    int maxProfit(vector<int>& prices, int fee)     // consider buy and sell stock II (leetcode)
    {
        return spaceOpti(prices , fee) ;
    }
};
