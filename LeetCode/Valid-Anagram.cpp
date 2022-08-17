
// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length())
        {
            return false ;
        }
        
        map<char,int> repeat1 ;
        map<char,int> repeat2 ;

        for(int i = 0 ; i < s.length() ; i++)
        {
            repeat1[s[i]] = repeat1[s[i]] + 1 ; 
        }
        
        for(int i = 0 ; i < t.length() ; i++)
        {
            repeat2[t[i]] = repeat2[t[i]] + 1 ; 
        }
        
        int arr1[26] = {0} ;
        int arr2[26] = {0} ;
        
        int flag = 0 ;
        
        for(int i = 0 ; i < 26 ; i++)
        {
            if(repeat1[char(i + 97)] == repeat2[char(i + 97)])
            {
                continue ;
            }   
            
            else
            {
                flag = 1 ;
                
                break ;
            }
        }
        
        if(flag)
        {
            return false ;
        }
        
        else
        {
            return true ;
        }
    }
};
