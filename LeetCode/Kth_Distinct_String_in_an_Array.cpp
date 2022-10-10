
// https://leetcode.com/problems/kth-distinct-string-in-an-array/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        map<string,int> rep ;
        
        vector<string> str ;
        
        for(int i = 0 ; i < arr.size() ; i++)
            rep[arr[i]] = rep[arr[i]] + 1 ;
        
        bool flag = false ;
        
        for(int i = 0 ; i < arr.size() ; i++)           // ordered map sorts automatically iter -> first
        {    
            if(rep[arr[i]] == 1)
            {
                str.push_back(arr[i]) ;
                flag = true ;
            }
        }
        
        if(!flag)
            return "" ;
        
        else
            return (str[k - 1]) ;
    }
};
