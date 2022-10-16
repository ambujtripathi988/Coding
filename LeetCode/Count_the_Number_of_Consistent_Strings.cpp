
// https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        set<char> allow ;
        int unallow = 0 ;
        
        for(int i = 0 ; i < allowed.length() ; i++)
            allow.insert(allowed[i]) ;
        
        for(int i = 0 ; i < words.size() ; i++)
        {
            string str = words[i] ;
            
            bool flag = false ;
            
            for(int j = 0 ; j < str.length() ; j++)
            {
                if(allow.find(str[j]) == allow.end())
                {
                    unallow ++ ;
                    flag = true ;
                    break ;
                }
                
                if(flag)
                    break ;
            }
        }
        
        return (words.size() - unallow) ;
    }
};
