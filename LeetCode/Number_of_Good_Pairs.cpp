
// https://leetcode.com/problems/number-of-good-pairs/

// if unable to understand, refer to the hint section

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        map<int , int> repeat ;
        
        int sum = 0;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            repeat[nums[i]] = repeat[nums[i]] + 1 ; 
        }
        
        for(auto iter = repeat.begin() ; iter != repeat.end() ; iter++)
        {
            if(iter -> second > 1)
            {
                int n = iter -> second ;
                
                sum += floor((n*(n-1))/2) ;
            }
        }
        
        return sum ;
    }
};
