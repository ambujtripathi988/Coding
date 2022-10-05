
// https://leetcode.com/problems/two-out-of-three/

class Solution { 
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        set<int> s1 ;
        set<int> s2 ;
        set<int> s3 ;
        set<int> uni ;
        
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            s1.insert(nums1[i]) ;
            uni.insert(nums1[i]) ;
        }
        
        for(int i = 0 ; i < nums2.size() ; i++)
        {
            s2.insert(nums2[i]) ;
            uni.insert(nums2[i]) ;
        }
        
        for(int i = 0 ; i < nums3.size() ; i++)
        {
            s3.insert(nums3[i]) ;
            uni.insert(nums3[i]) ;
        }
        
        vector<int> ans ;
        
        for(auto iter = uni.begin() ; iter != uni.end() ; iter++)
        {
            int x = *iter ;
            
            if( (s1.find(x) != s1.end() && s2.find(x) != s2.end()) || (s1.find(x) != s1.end() && s3.find(x) != s3.end()) || (s2.find(x) != s2.end()) && s3.find(x) != s3.end())
                ans.push_back(x) ;
        }
            
        return ans ;
    }
};
