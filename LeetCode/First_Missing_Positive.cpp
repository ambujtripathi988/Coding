
// https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        set<int> ans ;

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] > 0)
                ans.insert(nums[i]) ;
        }

        vector<int> arr ;

        for(auto iter = ans.begin() ; iter != ans.end() ; iter++)
        {
            arr.push_back(*iter) ;
        }

        int n , flag = 0 ;

        if(ans.find(1) == ans.end())
        {
            n = 1 ;
            
            flag = 1 ;
        }
        
        else
        {
            for(int i = 0 ; i < arr.size() - 1  ; i++)
            {
                if( (arr[i] + 1 ) != arr[i+1])
                {
                    n = arr[i] + 1 ;

                    flag = 1 ;
                    
                    break ;
                }
            }
        }

        if(flag)
            return n ;
        
        else
            n = arr.size() + 1 ;
        
        return n ;
        
    }
};
