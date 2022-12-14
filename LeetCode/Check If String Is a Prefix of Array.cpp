
// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words)  
    {
        string str = "" ;
        
        if(s == words[0]) 
            return true ;
        
        for(int i = 0 ; i < words.size() ; i++)
        {
            if(s == str)
                return true ;
            
            if(str.length() > s.length())
                return false ;
            
            str.append(words[i]) ;
        }    
        
        if(s == str)
            return true ;
        
        else
            return false ;
    }
};
