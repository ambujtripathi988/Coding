
// https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string str) 
    {
        int i = str.length() -1 ;
        string st = "" ;

        while(i >= 0)
        {
            // first remoove the  whitspace from the last of the given string 
            while(i >= 0 && str[i] == ' ')
                i-- ;

            // Apply the condition to check whether the string end or not end 
            if(i < 0)
                break ;

            // Store the last index in some other variable
            int j = i ;

            while(i >=0 && str[i] != ' ')
                i-- ;

            if(!st.length())
                st.append(str.substr(i+1,j-i) ) ;

            else
            {
                st.push_back(' ') ;
                st.append(str.substr(i+1,j-i) ) ;
            }
        }

        return st ;
    } 
};
