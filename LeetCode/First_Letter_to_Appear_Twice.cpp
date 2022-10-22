
// https://leetcode.com/problems/first-letter-to-appear-twice/

class Solution {
public:
    char repeatedCharacter(string s) 
    {
        unordered_map<char,int> rep ;
        char ch ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            rep[s[i]] = rep[s[i]] + 1 ;
            
            int x = rep[s[i]] ;
            
            if(x == 2)
            {
                ch = s[i] ;
                break ;
            }
        }
        
        return ch ;
    } 
};
