
// https://leetcode.com/problems/removing-stars-from-a-string/description/

class Solution {
public:
    string removeStars(string s) 
    {
        string str = "" ;

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '*')
            {
                if(str.length())
                    str.pop_back() ;

                else
                    continue ;
            }

            else
                str.push_back(s[i]) ;
        }    

        return str ;
    }
};
