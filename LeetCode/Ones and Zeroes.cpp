
// https://leetcode.com/problems/ones-and-zeroes/description/

class Solution {
public:
    // recursion + memoization
    int solveMem(int inde , int s , int m , int n , vector<string>& str , vector<vector<vector<int>>>& dp)
    {
        // base case 
        if(inde == s)
            return 0 ;

        if(dp[inde][m][n] != -1)
            return dp[inde][m][n] ;

        int excl = solveMem(inde+1 , s , m , n , str , dp) ;

        int cn0 = 0 , cn1 = 0 , incl = 0 ;

        for(char ch : str[inde])
            ch == '0' ? cn0 ++ : cn1 ++ ;

        if(m >= cn0 && n >= cn1)
            incl = 1 + solveMem(inde+1 , s , m - cn0 , n - cn1 , str , dp) ;

        return dp[inde][m][n] = max(incl , excl) ;
    }

    int findMaxForm(vector<string>& str, int m, int n) 
    {
        int s = str.size() ;

        // dp array 
        vector<vector<vector<int>>> dp (s , vector<vector<int>> (m+1 , vector<int> (n+1 , -1) ) ) ;

        return solveMem(0 , s , m , n , str , dp) ;     
    }
};
