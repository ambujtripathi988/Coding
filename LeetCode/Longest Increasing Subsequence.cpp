
// https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    // dp with binary search
    int dpwithBinary(int n , vector<int> a)
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

    int lengthOfLIS(vector<int>& nums) 
    {
        // refer Longest Increasing Subsequence gfg practice

        return dpwithBinary(nums.size() , nums) ;    
    }
};
