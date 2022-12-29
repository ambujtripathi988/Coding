
// https://leetcode.com/problems/combination-sum/

class Solution {
public:
    void findCombi(int ind , int target , vector<int> &arr , vector<vector<int>> & ans , vector<int> &ds)
    {
        // base condition :
        
        if(ind == arr.size())
        {
            if(target == 0)
                ans.push_back(ds) ;
            
            return ;
        }
        
        // pick element :
        
        if(arr[ind] <= target)
        {
            ds.push_back(arr[ind]) ;
            
            findCombi(ind , target-arr[ind] , arr, ans , ds) ;
            
            ds.pop_back() ;
        }
        
        // not pick element : 
        
        findCombi(ind + 1 , target , arr , ans , ds) ;
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans ;
        vector<int> ds ;
        
        findCombi(0,target,candidates,ans,ds) ;
        
        return ans ;
    }
};
