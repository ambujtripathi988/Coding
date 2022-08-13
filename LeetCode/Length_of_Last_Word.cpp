
// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string str) 
    {
        int len = 0 ;
        
        for(int i = str.length() - 1 ; i >= 0 ; i--)
        {           
            if( str[i] != ' ' )
            {
                len ++ ;
            }
            
            else if(len > 0)
            {
                return len ;
            }
        }
        
        return len ;
    }
};
