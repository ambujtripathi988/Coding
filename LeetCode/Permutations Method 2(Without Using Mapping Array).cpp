
// https://leetcode.com/problems/permutations/

// Method 2 : Without using Mapping Array :
// Time Complexity : O(N! * N)

class Solution {
public:
    
    void permu(int inde , vector<int>& nums ,vector<vector<int>>& ans)
    {
        if(inde == nums.size())
        {
            vector<int> ds ;
            
            for(int i = 0 ; i < nums.size() ; i++)
                ds.push_back(nums[i]) ;
            
            ans.push_back(ds) ;
            return ;
        }
        
        for(int i = inde ; i < nums.size() ; i++)
        {
            swap(nums[inde] , nums[i]) ;
            
            permu(inde + 1 , nums , ans) ;
            
            swap(nums[inde] , nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans ;
        
        permu(0 , nums , ans) ;
        
        return ans ;
    }
};
