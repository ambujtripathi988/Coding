
// https://practice.geeksforgeeks.org/problems/unique-bsts-1587115621/1

class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    
    int numTrees(int n) 
    {
        // tabulation
       long mod = 1000000007;
       
       vector<long> dp(n+1);
       
       dp[0] = dp[1] = 1;
       
       for(int i=2; i<=n; i++)
            for(int j=0; j<i; j++)
                dp[i] = (dp[i] + dp[j] * dp[i-j-1]) % mod;
                
       return dp[n];
       
       // consider leetcode unique bst tabulaion
    }
};
