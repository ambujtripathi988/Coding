
// https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution { 
public:
    int firstUniqChar(string s) 
    {
        map<char,int> repeat ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            repeat[s[i]] = repeat[s[i]] + 1 ;
        }
        
        char ch ;
        
        int ind = -1 ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(repeat[s[i]] == 1)
            {
                ind = i ;
                
                break ;
            }
        }
        
        return ind ;
    }
};
