
// https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution {
public:
    string reverseVowels(string s) 
    {
        vector<char> vowels ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E'|| s[i] == 'i'|| s[i] == 'I'|| s[i] == 'o' || s[i] == 'O' || s[i] == 'u'|| s[i] == 'U')
            {
                vowels.push_back(s[i]) ;
            }
        }
        
        reverse(vowels.begin() , vowels.end()) ;
        
        int ind = 0 ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E'|| s[i] == 'i'|| s[i] == 'I'|| s[i] == 'o' || s[i] == 'O' || s[i] == 'u'|| s[i] == 'U')
            {
                s[i] = vowels[ind] ;        // replacing a character in a string 
                
                ind++ ;
            }
        }
        
        return s ;
    }
};
