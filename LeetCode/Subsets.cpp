
// https://leetcode.com/problems/subsets/

class Solution {
public:
    void subset(int ind , vector<int>& arr , vector<int>& v , set<vector<int>>& vect) 
    {
        if(ind == arr.size())
        {
            vect.insert(v) ;
            return ;
        }
        
        // pick condition :
        
        v.push_back(arr[ind]) ;
        
        subset(ind + 1 , arr , v , vect) ;
        
        v.pop_back() ;
        
        // not pick condition : 
        
        subset(ind + 1 , arr , v , vect) ;  
        
    }
    
    vector<vector<int>> subsets(vector<int>& arr) 
    {
        set<vector<int>> vect ;
        
        vector<int> v ;
        
        vect.insert(v) ;
        
        subset(0 , arr , v , vect) ;
        
        vector<vector<int>> a ;
        
        for(auto iter = vect.begin() ; iter != vect.end() ; iter++)
            a.push_back(*iter) ;
        
        return a ;
    }
};
