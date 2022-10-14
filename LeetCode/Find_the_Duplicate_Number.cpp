
// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums)  
    {
        int no ;
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second >= 2)
            {
                no = iter -> first ;
                break ;
            }
        }
        
        return no ;
    }
};
