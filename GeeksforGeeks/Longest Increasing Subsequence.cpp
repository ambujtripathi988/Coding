
// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

class Solution
{
    public:
    
    // recusive function will give TLE
    int solve(int n , int a[] , int curr , int prev)
    {
        // base case 
        if(curr == n)
            return 0 ;
            
        // include condition
        int incl = 0 ;
        
        if(prev == -1 || a[curr] > a[prev])
            incl = 1 + solve(n , a , curr + 1 , curr) ;
            
        // exlude condition
        int excl = 0 + solve(n , a , curr + 1 , prev) ;
        
        return max(incl , excl) ;
    }
    
    // recursion + memoization
    int solveMem(int n , int a[] , int curr , int prev , vector<vector<int> >& dp)
    {
        // base case 
        if(curr == n)
            return 0 ;
            
        if(dp[curr][prev+1] != -1)
            return dp[curr][prev+1] ;
            
        // include condition
        int incl = 0 ;
        
        if(prev == -1 || a[curr] > a[prev])
            incl = 1 + solveMem(n , a , curr + 1 , curr , dp) ;     // prev changes to curr
            
        // exlude condition
        int excl = 0 + solveMem(n , a , curr + 1 , prev , dp) ;     // prev doesn't change
        
        dp[curr][prev+1] = max(incl , excl) ;
        
        return dp[curr][prev+1] ;
    }
    
    // tabulation
    int solveTab(int n , int a[])
    {
        vector<vector<int> > dp(n+1 , vector<int> (n+1,0) ) ;
        
        for(int curr = n-1 ; curr >= 0 ; curr--)
        {
            for(int prev = curr -1 ; prev >= -1 ; prev--)
            {
                // include condition
                int incl = 0 ;
                
                if(prev == -1 || a[curr] > a[prev])
                    incl = 1 + dp[curr + 1][curr + 1] ;
                    
                // exlude condition
                int excl = 0 + dp[curr + 1][prev+1] ;
                
                dp[curr][prev+1] = max(incl , excl) ;
            }
        }
        
        return dp[0][0] ;
    }
     
    // space optimization
    int spaceOpti(int n , int a[])
    {
        vector<int> currRow(n+1,0) ;
        vector<int> nextRow(n+1,0) ;
        
        for(int curr = n-1 ; curr >= 0 ; curr--)
        {
            for(int prev = curr -1 ; prev >= -1 ; prev--)
            {
                // include condition
                int incl = 0 ;
                
                if(prev == -1 || a[curr] > a[prev])
                    incl = 1 + nextRow[curr + 1] ;
                    
                // exlude condition
                int excl = 0 + nextRow[prev+1] ;
                
                currRow[prev+1] = max(incl , excl) ;
            }
            
            nextRow = currRow ;
        }
        
        return nextRow[0] ;
    }
    
    // dp with binary search
    int dpwithBinary(int n , int a[])
    {
        if(n == 0)
            return 0 ;
            
        vector<int> ans ;               // ans vector is working as dp array
        ans.push_back(a[0]) ;
        
        for(int i = 1 ; i < n ; i ++)
        {
            if(a[i] > ans.back())
                ans.push_back(a[i]) ;
                
            else
            {
                // find index of just greater element
                
                int inde = lower_bound(ans.begin() , ans.end() , a[i] ) - ans.begin() ;              // takes log N time complexity
                
                ans[inde] = a[i] ;
            }
        }
        
        return ans.size() ;
    }
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        // return solve(n , a , 0 , -1) ;
        
        // vector<vector<int> > dp( n , vector<int> (n+1 , -1)) ;
        
        // return solveMem(n , a , 0 , -1 , dp) ;
        
        // return solveTab(n , a) ;
        
        // return spaceOpti(n , a) ;
        
        return dpwithBinary(n , a) ;
    }
};
