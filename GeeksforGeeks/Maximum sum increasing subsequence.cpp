
// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

class Solution{
    private:    
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
            incl = a[curr] + solveMem(n , a , curr + 1 , curr , dp) ;     // prev changes to curr
            
        // exlude condition
        int excl = 0 + solveMem(n , a , curr + 1 , prev , dp) ;     // prev doesn't change
        
        dp[curr][prev+1] = max(incl , excl) ;
        
        return dp[curr][prev+1] ;
    }
    
    public:
    int maxSumIS(int a[], int n)  
    {  
        // Your code goes here
        
        vector<vector<int> > dp( n , vector<int> (n , -1)) ;
        
        return solveMem(n , a , 0 , -1 , dp) ; 
    }  
};
