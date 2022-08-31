
// https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int vowel1 = 0 , vowel2 = 0 ;
        
        for(int i = 0 ; i < s.length() / 2 ; i++)
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E'|| s[i] == 'i'|| s[i] == 'I'|| s[i] == 'o' || s[i] == 'O' || s[i] == 'u'|| s[i] == 'U')
                vowel1 ++ ;
        
        
        for(int i = s.length() / 2 ; i < s.length() ; i++)
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E'|| s[i] == 'i'|| s[i] == 'I'|| s[i] == 'o' || s[i] == 'O' || s[i] == 'u'|| s[i] == 'U')
                vowel2 ++ ;
        
        if(vowel1 == vowel2)
            return true ;
        
        else
            return false ;
    }
};
