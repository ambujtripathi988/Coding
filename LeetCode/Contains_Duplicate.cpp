
// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> repeat ; 
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            repeat.insert(nums[i]) ;
        }
        
        if(nums.size() == repeat.size())
        {
            return false ;
        }
        
        else
        {
            return true ;
        }
    }
};
