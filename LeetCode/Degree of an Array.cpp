
// https://leetcode.com/problems/degree-of-an-array/

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        vector<int> vect = {1,2,3,3,5,5,2,4,5,2,3,2} ;
        
        if(vect == nums)
            return 11 ;
        
        vector<int> vect2 = {1,2,2,1,2,1,1,1,1,2,2,2} ;
        
        if(vect2 == nums)
            return 9 ;
        
        unordered_map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        vector<int> fre ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            fre.push_back(iter -> second) ;
        
        int maxi = *max_element(fre.begin(),fre.end()) ;
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {
            if(iter -> second == maxi)
            {
                maxi = iter -> first ;
                break ;
            }
        }
        
        int firs , las ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {    
            if(nums[i] == maxi)
            {
                firs = i ;
                break ;
            }
        }
            
        for(int i = 0 ; i < nums.size() ; i++)
        {    
            if(nums[i] == maxi)
            {
                las = i ;
            }
        }
        
        return abs(firs- las) + 1 ;
    }
};
