
// https://leetcode.com/problems/minimum-score-triangulation-of-polygon/description/

class Solution {
public:

    // recursive function will give TLE
    int solve(vector<int>& v , int i , int j)
    {
        // base case 
        if(i+1 == j)        // only two vertices left
            return 0 ;

        int ans = INT_MAX ;

        for(int k = i+1 ; k < j ; k++)
            ans = min(ans , v[i]*v[j]*v[k] + solve(v , i , k) + solve(v , k , j)) ;

        return ans ;
    }

    // recursion + memoization
    int solveMem(vector<int>& v , int i , int j , vector<vector<int>>& dp)
    {
        // base case 
        if(i+1 == j)        // only two vertices left
            return 0 ;

        if(dp[i][j] != -1)
            return dp[i][j] ;

        int ans = INT_MAX ;

        for(int k = i+1 ; k < j ; k++)
            ans = min(ans , v[i]*v[j]*v[k] + solveMem(v , i , k , dp) + solveMem(v , k , j , dp)) ;

        dp[i][j] = ans ;

        return dp[i][j] ;
    }

    int minScoreTriangulation(vector<int>& values) 
    {
        int n = values.size() ;

        // return solve(values , 0 , n-1) ;    

        vector<vector<int>> dp(n , vector<int> (n ,-1) ) ;

        return solveMem(values , 0 , n-1 , dp) ;
    }
};
