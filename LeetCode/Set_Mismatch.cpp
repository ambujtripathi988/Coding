
// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        map<int,int> rep ;
        
        int n = nums.size() ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        int repEle , missNo ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            if(iter -> second == 2)
                repEle = iter -> first ;
        
        vector<int> ans ;
        
        ans.push_back(repEle) ;
        
        for(int i = 1 ; i <= nums.size() + 1 ; i++)
        {
            if(!rep[i])
            {
                missNo = i ;
                break ;
            }
        }
            
        ans.push_back(missNo) ;
        
        return ans ;    
    }
};
