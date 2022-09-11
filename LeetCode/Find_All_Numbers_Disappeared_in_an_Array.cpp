
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n = nums.size() ;
         
        map<int,int> rep ;
        
        for(int i = 0 ; i < n ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        vector<int> ans ; 
        
        for(int i = 1 ; i <= n ; i++)
           if(rep.find(i) == rep.end())
                ans.push_back(i) ;

        return ans ;
    }
};
