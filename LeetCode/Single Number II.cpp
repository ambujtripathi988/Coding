
// https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] ++ ;
        
        int no ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second == 1)
            {                
                no = iter -> first ;
                break ;
            }
        }
        
        return no ;
    }
};
