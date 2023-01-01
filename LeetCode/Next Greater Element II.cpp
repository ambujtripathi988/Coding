
// https://leetcode.com/problems/next-greater-element-ii/

// Time Complexity : O(N^2)

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n = nums.size() ;
        
        vector<int> vect ;
        
        int maxi = *max_element(nums.begin() , nums.end()) ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == maxi)
                vect.push_back(-1) ;
            
            else
            {
                bool flag = false ;
                
                int j = (i + 1) % n ;
                
                while(!flag)
                {
                    if(nums[j] > nums[i])
                    {
                        vect.push_back(nums[j]) ;
                        flag = true ;
                    }
                    
                    else
                        j = (j + 1) % n ; 
                }
            }
        }
        
        return vect ;
    }
};
