
// https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        int fre = nums.size() / 3 ;
        
        nums.clear() ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            if(iter -> second > fre)
                nums.push_back(iter -> first) ;
        
        return nums ;
    }
};
