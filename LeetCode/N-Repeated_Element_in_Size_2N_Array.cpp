
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) 
    {
        map<int,int> rep ;

        int no ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second > 1)
            {
                no = iter -> first ;
                
                break ;
            }
        }
        
        return no ;
    }
};
