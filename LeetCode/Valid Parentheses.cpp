
// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st ;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' )
                st.push(s[i]) ;
        
            else
            {
                if(st.empty())
                    return false ;
                
                char ch = st.top() ;
            
                if( (ch == '(' && s[i] != ')') || (ch == '{' && s[i] != '}') || (ch == '[' && s[i] != ']') )
                    return false ;
                
                else
                    st.pop() ;
            }
        }
        
        return st.empty() ;
    }
};
