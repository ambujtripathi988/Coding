
// https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/

class Solution {
public:
    bool checkAlmostEquivalent(string words1, string words2) 
    {
        map<char,int> fre1 ;
        map<char,int> fre2 ;
        
        for(int i = 0 ; i < words1.length() ; i++)
        {
            fre1[words1[i]] = fre1[words1[i]] + 1 ;
            fre2[words2[i]] = fre2[words2[i]] + 1 ;
        }
        
        int flag = 0 ;
        
        for(int i = 0 ; i < words1.length() ; i++)
        {
            int x = fre1[words1[i]] ;
            int y = fre2[words1[i]] ;
            
            if( abs(x-y) <= 3)
                continue ;
            
            else
            {
                flag = 1 ;
                break ;
            }
        }
        
        if(flag)
            return false ;
        
        flag = 0 ;
        
        for(int i = 0 ; i < words1.length() ; i++)
        {
            int x = fre1[words2[i]] ;
            int y = fre2[words2[i]] ;
            
            if( abs(x-y) <= 3)
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
