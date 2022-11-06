
// https://leetcode.com/problems/thousand-separator/

class Solution {
public:
    string thousandSeparator(int n) 
    {
        string str = to_string(n) ;   
        
        if(str.length() <= 3)
            return str ;
        
        reverse(str.begin() , str.end()) ;
        
        string st = "" ;
        
        for(int i = 0 ; i < str.length() ; i++)
        {
            st.push_back(str[i]) ;
            
            if( (i+1) % 3 == 0 && i != str.length() - 1)
                st.push_back('.') ;
        }
        
        reverse(st.begin() , st.end()) ;
        
        return st ;
    }
};
