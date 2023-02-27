
// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/description/

class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        unordered_set<int> s ;

        for(int i = 0 ; i < nums.size() ; i++)    
            if(nums[i])
                s.insert(nums[i]) ;

        return s.size() ;
    }
};
