
// https://leetcode.com/problems/permutations/

// Method 1 : Using Mapping Array :
// Time Complexity : O(N! * N)

class Solution {
public:
    
    void subset(vector<int>& nums , vector<int>& ds , vector<vector<int>>& ans , vector<int>& arr)
    {
        if(ds.size() == nums.size())
        {
            ans.push_back(ds) ;
            return ;
        }
        
        // pick condition :
        
        for(int inde = 0 ; inde < nums.size() ; inde++)
        {
            if(!arr[inde])
            {
                ds.push_back(nums[inde]) ;
                arr[inde] = 1 ;

                subset(nums , ds , ans , arr) ;
                
                ds.pop_back() ;
                
                arr[inde] = 0 ;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans ;
        
        vector<int> ds ;
        
        vector<int> arr ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            arr.push_back(0) ;
        
        subset(nums , ds , ans , arr) ;
        
        return ans ;
    }
};
