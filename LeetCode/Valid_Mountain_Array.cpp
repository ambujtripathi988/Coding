
// https://leetcode.com/problems/valid-mountain-array/

class Solution {
public: 
    bool validMountainArray(vector<int>& arr) 
    {
        int flag = 0 , ind ;
        
        if(arr.size() == 1)
            return false ;
        
        if(arr[0] > arr[1])
            return false ;
        
        if(arr[arr.size() - 1] >= arr[arr.size() - 2])
            return false ;
        
        for(int i = 0 ; i < arr.size() - 1 ; i++)
        {
            if(arr[i] == arr[i+1])
            {
                flag = 1 ;
                break ;
            }
        }
        
        if(flag)
            return false ;
        
        for(int i = 0 ; i < arr.size() - 1 ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                ind = i ;
                break ;
            }
        }
        
        for(int i = 0 ; i < ind - 1 ; i++)
        {
            if(arr[i] < arr[i+1])
                continue ;
            
            else
            {
                flag = 1 ;
                break ;
            }
        }
        
        if(flag)
            return false ;
        
        for(int i = ind ; i < arr.size() - 1 ; i++)
        {
            if(arr[i] > arr[i+1])
                continue ;
            
            else
            {
                flag = 1 ;
                break ;
            }
        }
        
        if(flag)
            return false ;
        
        else
            return true ;
    }
};
