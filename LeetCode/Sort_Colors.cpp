
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        map<int,int> color ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            color[nums[i]] = color[nums[i]] + 1 ;
        }
         
        int zero = color[0] ;
        int one = color[1] ;
        int two = color[2] ;
        
        nums.clear() ;
        
        for(int i = 0 ; i < zero ; i++)
        {
            nums.push_back(0) ;    
        }
        
        for(int i = 0 ; i < one ; i++)
        {
            nums.push_back(1) ;    
        }
        
        for(int i = 0 ; i < two ; i++)
        {
            nums.push_back(2) ;    
        }
        
        // return ans ;
    }
};
