
// https://leetcode.com/problems/two-sum/

// Method 2 : Time Complexity - O(n)
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans ;
        
        map<int,int> mape ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mape[nums[i]] = i ;
        }
        
        for(int j = 0 ; j < nums.size() ; j++)
        {
            if(mape[(target-nums[j])] && mape[target-nums[j]] != j)
            {
                ans.push_back(j) ;
                
                ans.push_back(mape[(target - nums[j])]) ;
                
                break ;
            }
        }
            
        return ans ;
    }
};
