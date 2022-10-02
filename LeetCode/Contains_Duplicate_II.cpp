
// https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        map<int,int> rep ;
        
        for(int i = 0 ; i < nums.size() ; i++)
            rep[nums[i]] = rep[nums[i]] + 1 ;
        
        
        vector<int> arr ; 
        
        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            if(iter -> second >= 2)
                arr.push_back(iter -> first) ;
        
        int flag = 0 ; 
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
            vector<int> vect ;
            
            for(int j = 0 ; j < nums.size() ; j++)
            {
                if(arr[i] == nums[j])
                    vect.push_back(j) ;
            }
            
            for(int s = 0 ; s < vect.size() - 1 ; s++)
            {
                if(abs(vect[s] - vect[s+1]) <= k)
                {
                    flag = 1 ;
                    break ;
                }
            }
            
            if(flag)
                break ;
        }
        
        if(!flag)
            return false ;
        
        else
            return true ;
    }
};
