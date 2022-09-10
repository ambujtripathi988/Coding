
// https://leetcode.com/problems/third-maximum-number/

class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        set<int> sorted ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            sorted.insert(nums[i]) ;
        
        vector<int> ans ;
        
        for(auto iter = sorted.begin() ; iter != sorted.end() ; iter++)
            ans.push_back(*iter) ;
        
        if(ans.size() < 3)
            return ans[ans.size() - 1 ] ;
        
        else
            return ans[ans.size() - 3 ] ;
    }
};
