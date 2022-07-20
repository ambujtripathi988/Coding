
// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int x = 0 ;
        
        set<int> s ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            s.insert(nums[i]) ;         
        }
        
        for(auto iter = s.begin() ; iter != s.end() ; iter++)
        {
            if(*iter != x)
            {
                return x ;
            }

            else
            {
                x++ ;
            }
        }
        
        return x ;
    }
};
