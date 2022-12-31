
// https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> inde ;
        
        for(int i = 0 ; i < nums2.size() ; i++)
            inde.insert({nums2[i],i}) ;
        
        vector<int> ans ;
        
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            int ind = inde[nums1[i]] ;
            
            if(ind == nums2.size() - 1)
            {    
                ans.push_back(-1) ;
                continue ;
            }
            
            bool flag = false ;
            
            for(int j = ind ; j < nums2.size() ; j++)
            {
                if(nums2[j] > nums1[i])
                {
                    if(!flag)
                        ans.push_back(nums2[j]) ;
                    
                    flag = true ;
                }
            }
            
            if(!flag)
                ans.push_back(-1) ;
        }
        
        return ans ;
    }
};
