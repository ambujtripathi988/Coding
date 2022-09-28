
// https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> s1 ;
        set<int> s2 ;
        
        for(int i = 0 ; i < nums1.size() ; i++)
            s1.insert(nums1[i]) ;
        
        for(int i = 0 ; i < nums2.size() ; i++)
            s2.insert(nums2[i]) ;
        
        vector<int> inter ;
        
        for(auto iter = s1.begin() ; iter != s1.end() ; iter++)
            if(s2.find(*iter) != s2.end())
                inter.push_back(*iter) ;
        
        return inter ;
    }
};
