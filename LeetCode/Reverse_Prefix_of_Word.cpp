
// https://leetcode.com/problems/reverse-prefix-of-word/

class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int flag = 0 , inde ;
        
        for(int i = 0 ; i < word.length() ; i++)
        {   
            if(word[i] == ch)
            {
                flag = 1 ;
                
                inde = i ;
                
                break ;
            }
        }
        
        if(!flag)
            return word ; 
        
        else
        {
            string str ;
            
            for(int i = 0 ; i <= inde ; i++)
                str.push_back(word[i]) ;
            
            reverse(str.begin() , str.end()) ;
            
            for(int i = 0 ; i <= inde ; i++)
                word[i] = str[i] ;
            
            return word ;
        }
    }
};
