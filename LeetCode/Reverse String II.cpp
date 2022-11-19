
// https://leetcode.com/problems/reverse-string-ii/

class Solution {
public:
    string reverseStr(string str, int k) 
    {
        for(int i = 0 ; i < str.length() ; i += 2*k)
        {
            string s = str.substr(i,k) ;
            
            reverse(s.begin() , s.end()) ;
            
            str.replace(i,k,s) ;
        }    
        
        return str ;
    }
};
