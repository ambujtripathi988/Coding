
// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        vector<int> vect ; 
        
        int count = 0 ;
        
        vect.push_back(-1) ;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(vect[vect.size() - 1] == nums[i])
            {
                if(count < 2)
                {
                    vect.push_back(nums[i]) ;
                    count ++ ;
                }
            }
            
            else
            {
                count = 1 ;
                vect.push_back(nums[i]) ;
            }
        }
        
        vect.erase(vect.begin()) ;
        
        nums.clear() ;
        
        for(int i = 0 ; i < vect.size() ; i++)
            nums.push_back(vect[i]) ; 
        
        return vect.size() ;
    }
};
