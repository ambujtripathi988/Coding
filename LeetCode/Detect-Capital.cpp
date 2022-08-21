
// https://leetcode.com/problems/detect-capital/

class Solution { 
public:
    bool detectCapitalUse(string word) 
    {
        int upper = 0 ;
        
        for(int i = 0 ; i < word.length() ; i++)
        {
            if(isupper(word[i]))
            {
                upper ++ ;
            }
        }
        
        int count = 0 ;
        
        if(isupper(word[0]))
        {
            count = 1 ;
        }
        
        if(upper == 0 || (upper == 1 && count == 1 )  || upper == word.length())
        {
            return true ;
        }
        
        else
        {
            return false ;
        }
    }
};
