
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() == 1)
            return 0 ;
        
        int mini = prices[0] , profit = 0 ;
        
        for(int i = 0 ; i < prices.size() ; i++)
        {
            mini = min(mini , prices[i]) ;
            
            profit = max(profit , prices[i] - mini) ;
        }
        
        return profit ;
    }
};
