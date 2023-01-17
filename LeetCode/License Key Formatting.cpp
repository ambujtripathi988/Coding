
// https://leetcode.com/problems/license-key-formatting/

class Solution {
public:
    string licenseKeyFormatting(string s, int k) 
    {
        string str = "" ;
        
        bool flag = false ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                str.push_back(s[i]) ;
                flag = true ;
            }
        }
        
        if(!flag)               // for string such as "---"
            return "" ;
        
        reverse(str.begin() , str.end()) ;
        
        string st = "" ;
        
        int count = 0 ;
        
        for(int i = 0 ; i < str.length() ; i++)
        {
            if(isalpha(str[i]))
            {
                st.push_back(toupper(str[i])) ;
                count ++ ;
            }
            
            else
            {
                st.push_back(str[i]) ;
                count ++ ;
            }
            
            if(count == k)
            {
                count = 0 ;
                st.push_back('-') ;
            }
        }
        
        if(st[st.length() - 1] == '-')
            st.pop_back() ;
        
        reverse(st.begin() , st.end()) ;
        
        return st ;
    }
};
