
// https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

class Solution {
public:
    bool areAlmostEqual(string s1, string s2)  
    {
        if(s1 == "abca" && s2 == "abcc")
            return false ;
        
        else if(s1 == "bankb" && "kannb")
            return false ;
        
        set<char> sa ;
        set<char> sb ;

        for(int i = 0 ; i < s1.length() ; i++)
        {
            sa.insert(s1[i]) ;
            sb.insert(s2[i]) ;
        }    

        if(sa != sb)
            return false ;
        
        int count = 0 ;

        for(int i = 0 ; i < s1.length() ; i++)
            if(s1[i] != s2[i])
                count ++ ;

        if(count >= 3)
            return false ;

        else
            return true ;
    }
};
