
// https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int sum = 0 ; 
        unordered_map<int,int> rep ;
        vector<int> uni ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            if(iter -> second == 1)
                uni.push_back(iter -> first) ;
        
        for(int i = 0 ; i < uni.size() ; i++)
            sum += uni[i] ;
        
        return sum ;
    }
};
