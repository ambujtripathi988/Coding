
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
public:
    string removeDuplicates(string s) 
    {
        string str = "" ;

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(str.length() && str[str.length() -1 ] == s[i])
                str.pop_back() ;
            
            else if(!str.length() || str[str.length()-1] != s[i])
                str.push_back(s[i]) ;
        }    

        return str ;
    }
};
