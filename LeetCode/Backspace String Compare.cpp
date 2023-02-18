
// https://leetcode.com/problems/backspace-string-compare/description/

class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        string s1 = "" , s2 = "" ;

        for(int i = 0  ; i < s.length() ; i++)
        {
            if(s[i] == '#')
            {
                if(s1.length() > 0)
                    s1.pop_back() ;

                else
                    continue ;        
            }

            else
                s1.push_back(s[i]) ;
        } 

        for(int i = 0  ; i < t.length() ; i++)
        {
            if(t[i] == '#')
            {
                if(s2.length() > 0)
                    s2.pop_back() ;

                else
                    continue ;        
            }

            else
                s2.push_back(t[i]) ;
        }       

        cout << "s1 : " << s1 << " s2 : " << s2 ;

        return eqstr(s1,s2) ;
    }

    bool eqstr(string str1,string str2)
    {
        if(str1.length() != str2.length())
            return false ;

        for(int i = 0 ; i < str1.length() ; i++)
            if(str1[i] != str2[i])
                return false ;

        return true ;
    }
};
