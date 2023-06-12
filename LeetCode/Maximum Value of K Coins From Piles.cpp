
// https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/description/

class Solution {
public:
    int solveMem(int inde , int k , vector<vector<int>>& piles, vector<vector<int>>& dp)
    {
        // base case
        if(k == 0)
            return 0 ;

        if(inde == piles.size())
        {
            if(k == 0)
                return 0 ;

            return -1000000 ;
        }

        if(dp[inde][k] != -1)
            return dp[inde][k] ;

        int ans = INT_MIN ;

        for(int i = 0 ; i < min(k , (int)piles[inde].size() ) ; i++)
            ans = max(ans , piles[inde][i] + solveMem(inde+1 , k-(i+1) , piles , dp) ) ;

        return dp[inde][k] = max(ans , solveMem(inde+1 , k , piles , dp)) ;
    }

    int maxValueOfCoins(vector<vector<int>>& piles, int k) 
    {
        int n = piles.size() ;

        for (int i = 0; i < n; i++)
            for (int j = 1; j < piles[i].size(); j++)
                piles[i][j] += piles[i][j - 1];

        // dp array
        vector<vector<int>> dp ( n+1 , vector<int> (k+1 , -1 )) ;    

        return solveMem(0 , k , piles , dp) ;
    }
};
