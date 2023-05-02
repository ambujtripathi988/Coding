
// https://leetcode.com/problems/combination-sum-iv/description/

class Solution {
public:

    // recursion + memoization
    int solveMem(vector<int> &num, int tar , vector<int>& dp)
    {
        // base case
        if(tar < 0)
            return 0 ;

        if(tar == 0)
            return 1 ;

        if(dp[tar] != -1)
            return dp[tar] ;

        int ans = 0 ;

        for(int i = 0 ; i < num.size() ; i++)
            ans += solveMem(num , tar - num[i] , dp) ;

        dp[tar] = ans ;

        return dp[tar] ;
    }

    int combinationSum4(vector<int>& num, int tar) 
    {
        vector<int> dp(tar+1 , -1) ;

        return solveMem(num , tar , dp) ;     
    }
};
