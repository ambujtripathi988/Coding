
// https://leetcode.com/problems/jump-game-iii/description/

class Solution {
public:
    // recursion + memoization
    bool solveMem(int inde , vector<int>& arr , vector<int>& dp)
    {
        if(inde < 0 || inde >= arr.size())
            return false ;

        // base case 
        if(arr[inde] == 0)
            return true ;

        if(dp[inde] != -1)
            return dp[inde] ;

        dp[inde] = false ;

        int left = solveMem(inde-arr[inde] , arr , dp) ;

        int right = solveMem(inde+arr[inde] , arr , dp) ;
            
        return dp[inde] = left || right ;
    }

    bool canReach(vector<int>& arr, int start) 
    {
        int n = arr.size() ;

        // dp array
        vector<int> dp(n+1 , -1) ;

        return solveMem(start , arr ,dp) ; 
    }
};
