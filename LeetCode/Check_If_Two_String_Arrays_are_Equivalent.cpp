
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

class Solution { 
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1 , str2 ;
        
        for(int i = 0 ; i < word1.size() ; i++)
            str1.append(word1[i]) ;
        
        for(int i = 0 ; i < word2.size() ; i++)
            str2.append(word2[i]) ;
        
        if(str1.length() != str2.length())
            return false ;
        
        else
        {
            int flag = 0 ;
        
            for(int i = 0 ; i < str1.length() ; i++)
            {
                if(str1[i] == str2[i])
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
    }
};
