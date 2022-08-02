
// https://leetcode.com/problems/shuffle-the-array/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> vect1 ;
        vector<int> vect2 ;
        vector<int> ans ;
        
        for(int i = 0 ; i < (nums.size() / 2) ; i++)
        {
            vect1.push_back(nums[i]) ;   
        }
            
        for(int i = (nums.size() / 2) ; i < nums.size() ; i++)
        {
            vect2.push_back(nums[i]) ;   
        }
        
        for(int i = 0 ; i < (nums.size() / 2) ; i++)
        {
            ans.push_back(vect1[i]) ;
            
            ans.push_back(vect2[i]) ;
        }
        
        return ans ;
    }
};
