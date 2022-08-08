
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int> ans ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            ans.insert(nums[i]) ;
        }
        
        nums.clear() ;
        
        for(auto iter = ans.begin() ; iter!= ans.end() ; iter++)
        {
            nums.push_back(*iter) ;
        }
        
        return nums.size() ;
    }
};
