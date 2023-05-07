
// https://leetcode.com/problems/reducing-dishes/description/

class Solution {
public:

    // recursive function will give TLE
    int solve(vector<int>& satis , int inde , int time)
    {
        // base case 
        if(inde == satis.size())
            return 0 ;

        int incl = satis[inde] * (time+1) + solve(satis , inde+1 ,time+1) ;

        int excl = 0 + solve(satis , inde + 1 , time) ;

        return max(incl , excl) ;
    }

    // recursion + memoization
    int solveMem(vector<int>& satis , int inde , int time , vector<vector<int>>& dp)
    {
        // base case 
        if(inde == satis.size())
            return 0 ;

        if(dp[inde][time] != -1)
            return dp[inde][time] ;

        int incl = satis[inde] * (time+1) + solveMem(satis , inde+1 ,time+1, dp) ;

        int excl = 0 + solveMem(satis , inde + 1 , time, dp) ;

        dp[inde][time] = max(incl , excl) ;

        return dp[inde][time] ;
    }

    // tabulation
    int solveTab(vector<int>& satis)
    {
        int n = satis.size() ;

        vector<vector<int>> dp(n+1 , vector<int> (n+1 ,0)) ;

        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int time = inde ; time >= 0 ; time--)
            {
                int incl = satis[inde] * (time+1) + dp[inde+1][time+1] ;

                int excl = 0 + dp[inde + 1][time] ;

                dp[inde][time] = max(incl , excl) ;
            }
        }

        return dp[0][0] ;
    }

    // space optimize
    int spaceOpti(vector<int>& satis)
    {
        int n = satis.size() ;

        vector<int> curr(n+1 , 0) ;
        vector<int> next(n+1 , 0) ;

        for(int inde = n-1 ; inde >= 0 ; inde--)
        {
            for(int time = inde ; time >= 0 ; time--)
            {
                int incl = satis[inde] * (time+1) + next[time+1] ;

                int excl = 0 + next[time] ;

                curr[time] = max(incl , excl) ;
            }

            next = curr ;
        }

        return next[0] ;
    }

    int maxSatisfaction(vector<int>& satis) 
    {
        sort(satis.begin() , satis.end()) ;

        // return solve(satis , 0 , 0) ;    

        // int n  = satis.size() ;

        // vector<vector<int>> dp(n , vector<int> (n ,-1)) ;

        // return solveMem(satis , 0 , 0 , dp) ;

        // return solveTab(satis) ;

        return spaceOpti(satis) ;
    }
};
