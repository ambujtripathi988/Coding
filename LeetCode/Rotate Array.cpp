
// https://leetcode.com/problems/rotate-array/
 
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> vect ;
        
        int n = nums.size() ;
        
        for(int i = 0 ; i < n ; i++)
            vect.push_back(nums[i]) ;
        
        for(int i = 0 ; i < n ; i++)
            nums[(i+k) % n] = vect[i] ;
    }
};
