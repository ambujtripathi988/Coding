
// https://leetcode.com/problems/find-the-difference-of-two-arrays/

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> set1 ;
        set<int> set2 ;
        
        for(int i = 0 ; i < nums1.size() ; i++)
            set1.insert(nums1[i]) ;
        
        for(int i = 0 ; i < nums2.size() ; i++)
            set2.insert(nums2[i]) ;
        
        vector<vector<int>> ans ;
        
        vector<int> seq ;
        
        for(auto iter = set1.begin() ; iter != set1.end() ; iter++)
            if(set2.find(*iter) == set2.end())
                seq.push_back(*iter) ;
        
        ans.push_back(seq) ;
        
        seq.clear() ;
        
        for(auto iter = set2.begin() ; iter != set2.end() ; iter++)
            if(set1.find(*iter) == set1.end())
                seq.push_back(*iter) ;
        
        ans.push_back(seq) ;
        
        return ans ;
    }
};
