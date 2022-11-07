
// https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution { 
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        map<int,int> mape ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            mape[nums[i]] ++ ;
        
        nums.clear() ;
        
        for(auto iter = mape.begin() ; iter != mape.end() ; iter++)
            if(iter -> second == 2)
                nums.push_back(iter -> first) ;
        
        return nums ;
    }
};
