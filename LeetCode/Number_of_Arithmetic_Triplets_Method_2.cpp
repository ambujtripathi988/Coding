
// https://leetcode.com/problems/number-of-arithmetic-triplets/

// Method 2 - Time Complexity : O{N.log(N)}     (HashMap)

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) 
    {
        int count = 0 ; 
        unordered_map<int,int> rep ;
        
        int siz = nums.size() ;
        
        for(int i = 0 ; i < siz ; i++)
            rep.insert({nums[i] , i}) ;
        
        for(int i = 0 ; i < siz ; i++)
            if(rep.find(nums[i] + diff) != rep.end() && rep.find(nums[i] + 2*diff) != rep.end())
                count ++ ;
        
        return count ;
    }
};
