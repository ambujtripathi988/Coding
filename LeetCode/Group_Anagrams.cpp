
// https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    { 
        vector<vector<string>> ans ;
        
        map<string,vector<string>> mape ;
        
        if(strs.size() == 0)
            return ans ;
        
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string key = strs[i] ;
            
            sort(key.begin(),key.end()) ;
            
            mape[key].push_back(strs[i]) ;
        }
        
        for(auto iter = mape.begin() ; iter != mape.end() ; iter++)
        {
            ans.push_back(iter -> second) ;
        }
        
        return ans ;
    }
};
