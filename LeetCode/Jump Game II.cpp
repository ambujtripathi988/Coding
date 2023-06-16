
// https://leetcode.com/problems/jump-game-ii/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int inde , vector<int>& nums , vector<int>& dp)
    {
        // base case 
        if(inde >= nums.size()-1)
            return 0 ;

        if(dp[inde] != -1)
            return dp[inde] ;

        int mini = 1e9 ;

        for(int k = inde+1 ; k <= inde + nums[inde] ; k++)
            mini = min(mini , 1 + solveMem(k , nums , dp)) ;

        return dp[inde] = mini ;
    }

    int jump(vector<int>& nums) 
    {
        int n = nums.size() ;

        // dp array
        vector<int> dp(n+1 , -1) ;

        return solveMem(0 , nums , dp) ;
    }
};
