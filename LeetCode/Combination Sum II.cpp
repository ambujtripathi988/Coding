
// https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:
    void findCombi(int ind , int target , vector<int> &arr , vector<vector<int>> & ans , vector<int> &ds)
    {
        // base condition :
        
        if(target == 0)
        {
            ans.push_back(ds) ;
            return ;
        }
        
        for(int i = ind ; i < arr.size() ; i++)
        {
            if(i > ind && arr[i] == arr[i-1])       // not picking repeated elements at starting
                continue ;
            
            if(arr[i] > target)
                break ;
            
            ds.push_back(arr[i]) ;
            
            findCombi(i + 1 , target - arr[i] , arr , ans , ds) ;
            
            ds.pop_back() ;
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans ;
        vector<int> ds ;
        
        sort(candidates.begin() , candidates.end()) ;
        
        findCombi(0,target,candidates,ans,ds) ;
        
        return ans ;
    }
};