
// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int count = 0 ;
        
        vector<int> vect ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] != val)
            {
                vect.push_back(nums[i]) ;
            } 
        }    
        
        nums.clear() ;
        
        for(int i = 0 ; i < vect.size() ; i++)
        {
            nums.push_back(vect[i]) ;
        }
        
        return vect.size() ;
    }
};
