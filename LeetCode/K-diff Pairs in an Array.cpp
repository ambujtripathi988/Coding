
// https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        int count = 0 ;
        
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] ++ ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(k == 0)
            {
                if(iter -> second > 1)
                    count ++ ;
            }
            
            else if(rep.find((iter -> first) + k) != rep.end())
                count ++ ;
        }
        
        return count ;
    }
};
