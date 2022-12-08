
// https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        nums.clear() ;
        
        int count = 0 ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second == 1)
            {    
                nums.push_back(iter -> first) ;
                count ++ ;
                
                if(count == 2)
                    break ;
            }        
        }   
        
        return nums ;
    }
};
