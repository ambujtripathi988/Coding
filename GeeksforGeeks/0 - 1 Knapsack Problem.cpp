
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/0

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int solveMem(int weight[], int value[], int inde, int capacity , vector<vector<int>>& dp) 
    {
        if (inde == 0) 
        {
            if(weight[0] <= capacity)
                return value[0] ;
    
            else 
                return 0 ;
        }
    
        if(dp[inde][capacity] != -1)
            return dp[inde][capacity] ;
    
        int incl = 0 ;
    
        if(weight[inde] <= capacity)
            incl = value[inde] + solveMem(weight , value , inde-1 , capacity - weight[inde] , dp) ;
    
        int excl = 0 + solveMem(weight , value , inde - 1 , capacity , dp) ;
    
        int ans = max(incl,excl) ;
    
        dp[inde][capacity] = ans ;
    
        return dp[inde][capacity] ;
    }

    int knapSack(int W, int weight[], int value[], int n) 
    { 
       // Your code here
       
        vector<vector<int>> dp(n,vector<int>(W+1 , -1)) ;

        return solveMem(weight , value , n-1 , W , dp) ;
    }
};
