
// https://leetcode.com/problems/single-number/
 
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        int no ;
        
        for(auto iter = rep.begin() ; iter!= rep.end() ; iter++)
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
