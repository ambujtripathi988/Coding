
// https://practice.geeksforgeeks.org/problems/edit-distance3702/1

class Solution {
  public:
    // recursion + memoization
    int solveMem(string &a , string &b , int i , int j , vector<vector<int>>& dp)
    {
        // base case
        if(i == a.length())                 // a string ki length b string ke length se chhoti hai
            return b.length() - j ;

        if(j == b.length())                 // b string ki length a string ke length se chhoti hai
            return a.length() - i ; 

        if(dp[i][j] != -1)
            return dp[i][j] ;
            
        int ans = 0 ; 

        if(a[i] == b[j])
            return solveMem(a , b , i+1 , j+1 , dp) ;

        else
        {
            // insert
            int insAns = 1 + solveMem(a , b , i , j+1 , dp) ;

            // delete
            int delAns = 1 + solveMem(a , b , i+1 , j , dp) ;

            // replace
            int repAns = 1 + solveMem(a , b , i+1 , j+1 , dp) ;

            ans = min(insAns , min(delAns , repAns)) ;
        }

        return dp[i][j] = ans ;
    }
    
    int editDistance(string word1, string word2) 
    {
        int n = word1.length() , m = word2.length() ;

        // dp array
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , -1) ) ;
        
        return solveMem(word1 , word2 , 0 , 0 , dp) ;
    }
};
