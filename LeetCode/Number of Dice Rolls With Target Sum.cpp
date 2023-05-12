
// https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int dice , int faces , int target , vector<vector<int> > &dp)
    {
        // base case
        if(target < 0)
            return 0 ;
            
        if(dice == 0 && target != 0)
            return 0 ;
            
        if(target == 0 && dice != 0)
            return 0 ;
            
        if(dice == 0 && target == 0)
            return 1 ;
            
        if(dp[dice][target] != -1)
            return dp[dice][target] ;
            
        int ans = 0 ;
        
        for(int i = 1 ; i <= faces ; i++)
            ans = (ans + solveMem(dice-1 , faces , target - i , dp)) % (int)(1e9 + 7);
            
        dp[dice][target] = ans ;
        
        return dp[dice][target] ;
    }

    int numRollsToTarget(int n, int k, int target) 
    {
        vector<vector<int>> dp(n+1 ,vector<int> (target+1,-1)) ;

        return solveMem(n , k , target , dp) ;
    }
};
