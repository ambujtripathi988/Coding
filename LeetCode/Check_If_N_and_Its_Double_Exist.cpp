
// https://leetcode.com/problems/check-if-n-and-its-double-exist/ 

class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        set<int> s ;
        
        int flag = 0 , zero_count = 0 ;
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
            s.insert(arr[i]) ;
        }
        
        for(int i = 0 ; i < arr.size() ; i++)
        {   
            if(arr[i] != 0)
            {
                if(s.find(arr[i]*2) != s.end())
                {
                    flag = 1 ;

                    break ;
                }    
            }
            
            if(arr[i] == 0)
            {
                zero_count ++ ;
            }
        }
        
        if(zero_count > 1)
        {
            flag = 1 ;
        }
        
        if(flag)
        {
            return true ;
        }
        
        else
        {
            return false ;
        }
    }
};
