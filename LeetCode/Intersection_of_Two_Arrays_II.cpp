
// https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int,int> rep1 ;
        map<int,int> rep2 ;
        
        for(int i = 0 ; i < nums1.size() ; i++)
            rep1[nums1[i]] = rep1[nums1[i]] + 1 ;
        
        for(int i = 0 ; i < nums2.size() ; i++)
            rep2[nums2[i]] = rep2[nums2[i]] + 1 ;
        
        vector<int> inter ;
        
        for(auto iter = rep1.begin() ; iter != rep1.end() ; iter++)
        {
            if(rep2.find(iter -> first) != rep2.end())
            {
                int x = rep2[iter -> first] ;
                
                if(x <= iter -> second)
                {
                    while(x--)
                        inter.push_back(iter -> first) ;
                }
                
                else
                    while( (iter -> second)-- )
                        inter.push_back(iter -> first) ;
            }
        }
        
        return inter ;
    }
};
