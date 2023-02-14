
// https://leetcode.com/problems/most-frequent-even-element/description/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        map<int,int> rep ;
        bool flag = false ;

        for(int i = 0 ; i < nums.size() ; i++)
        {    
            if(nums[i] % 2 == 0)
            {
                rep[nums[i]] ++ ;
                flag = true ;
            }
        }

        if(!flag)
            return -1 ;

        int maxi = INT_MIN , no ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
            maxi = max(iter -> second , maxi) ;

        for(auto iter = rep.begin() ; iter != rep.end() ; iter++)
        {    
            if(iter -> second == maxi)
            {
                no = iter -> first ;
                break ;    
            }   
        } 

        return no ;
    }
};
