
// https://leetcode.com/problems/minimum-sideway-jumps/description/

class Solution {
public:

    // recursive function will give TLE
    int solve(vector<int>& obs , int currlane , int currpos)
    {
        int n = obs.size()-1 ;

        // base case 
        if(currpos == n)        // jahan par hain wahi final position hai to 
            return 0 ;

        if(obs[currpos + 1] != currlane)        // agar aage obstackle current lane mein nhi hai to
            return solve(obs , currlane , currpos + 1 ) ;

        else        // agar aage current lane mein obstackle hai to side ways jump kran padega
        {
            int ans = INT_MAX ;

            for(int i = 1 ; i <= 3 ; i++)
                if(currlane != i && obs[currpos] != i)
                    ans = min(ans , 1 + solve(obs,i,currpos)) ;

            return ans ;
        }
    }

    // recursion + memoization
    int solveMem(vector<int>& obs , int currlane , int currpos , vector<vector<int>>& dp)
    {
        int n = obs.size()-1 ;

        // base case 
        if(currpos == n)        // jahan par hain wahi final position hai to 
            return 0 ;

        if(dp[currlane][currpos] != -1)
            return dp[currlane][currpos] ;

        if(obs[currpos + 1] != currlane)        // agar aage obstackle current lane mein nhi hai to
            return solveMem(obs , currlane , currpos + 1  , dp) ;

        else        // agar aage current lane mein obstackle hai to side ways jump kran padega
        {
            int ans = INT_MAX ;

            for(int i = 1 ; i <= 3 ; i++)
                if(currlane != i && obs[currpos] != i)
                    ans = min(ans , 1 + solveMem(obs,i,currpos , dp)) ;

            dp[currlane][currpos] = ans ;

            return dp[currlane][currpos] ;
        }
    }

    int minSideJumps(vector<int>& obs) 
    {
        // return solve(obs , 2 , 0) ; 

        vector<vector<int>> dp(4 , vector<int>(obs.size(),-1)) ;   

        return solveMem(obs , 2 , 0 , dp) ;
    }
};
