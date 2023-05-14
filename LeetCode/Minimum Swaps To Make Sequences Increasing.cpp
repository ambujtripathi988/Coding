
// https://leetcode.com/problems/minimum-swaps-to-make-sequences-increasing/description/

class Solution {
public:
    // recursive solution will give TLE
    int solve(vector<int>& nums1, vector<int>& nums2 , int inde , bool swapped)
    {
        // base case 
        if(inde == nums1.size())
            return 0 ;

        int ans = INT_MAX ;

        int prev1 = nums1[inde-1] ;
        int prev2 = nums2[inde-1] ;

        // catch 
        if(swapped)
            swap(prev1,prev2) ;         // ek dusre ke liye values badal chuki hongi pichhle swap mein

        // no swap condition :
        if(nums1[inde] > prev1 && nums2[inde] > prev2) 
            ans = solve(nums1 , nums2 , inde+1 , 0) ;

        // swap condition :
        if(nums1[inde] > prev2 && nums2[inde] > prev1)
            ans = min(ans , 1 + solve(nums1 , nums2 , inde+1 , 1)) ;

        return ans ;
    }

    // recursion + memoization
    int solveMem(vector<int>& nums1, vector<int>& nums2 , int inde , bool swapped , vector<vector<int>>& dp)
    {
        // base case 
        if(inde == nums1.size())
            return 0 ;

        if(dp[inde][swapped] != -1)
            return dp[inde][swapped] ;

        int ans = INT_MAX ;

        int prev1 = nums1[inde-1] ;
        int prev2 = nums2[inde-1] ;

        // catch 
        if(swapped)
            swap(prev1,prev2) ;         // ek dusre ke liye values badal chuki hongi pichhle swap mein

        // no swap condition :
        if(nums1[inde] > prev1 && nums2[inde] > prev2) 
            ans = solveMem(nums1 , nums2 , inde+1 , 0 , dp) ;

        // swap condition :
        if(nums1[inde] > prev2 && nums2[inde] > prev1)
            ans = min(ans , 1 + solveMem(nums1 , nums2 , inde+1 , 1 , dp)) ;

        return dp[inde][swapped] = ans ;
    }

    // tabulation
    int solveTab(vector<int>& nums1, vector<int>& nums2)
    {
        int n = nums1.size() ;

        vector<vector<int>> dp(n+1 , vector<int> (2,0)) ;

        for(int inde = n -1 ; inde >= 1 ; inde--)
        {
            for(int swapped = 1 ; swapped >= 0 ; swapped--)
            {
                int ans = INT_MAX ;

                int prev1 = nums1[inde-1] ;
                int prev2 = nums2[inde-1] ;

                // catch 
                if(swapped)
                    swap(prev1,prev2) ;         // ek dusre ke liye values badal chuki hongi pichhle swap mein

                // no swap condition :
                if(nums1[inde] > prev1 && nums2[inde] > prev2) 
                    ans = dp[inde+1][0] ;

                // swap condition :
                if(nums1[inde] > prev2 && nums2[inde] > prev1)
                    ans = min(ans , 1 + dp[inde+1][1] ) ;

                dp[inde][swapped] = ans ;
            } 
        }

        return dp[1][0] ;
    }

    int minSwap(vector<int>& nums1, vector<int>& nums2) 
    {
        nums1.insert(nums1.begin(),-1) ;
        nums2.insert(nums2.begin(),-1) ;     

        bool swapped ;

        // return solve(nums1,nums2,1,swapped) ;

        // int n = nums1.size() ;

        // vector<vector<int>> dp(n , vector<int> (2,-1)) ;

        // return solveMem(nums1,nums2,1,swapped,dp) ;

        return solveTab(nums1,nums2) ;
    }
};
