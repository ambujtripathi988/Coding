
// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int , int> repeat ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            repeat[nums[i]] = repeat[nums[i]] + 1 ; 
        }
        
        int no ;
        
        for(auto iter = repeat.begin() ; iter != repeat.end() ; iter++)
        {
            if(iter -> second > (nums.size())/2)
            {
                no = iter -> first ;
                
                break ;
            }
        }
        
        return no ;
    }
};
